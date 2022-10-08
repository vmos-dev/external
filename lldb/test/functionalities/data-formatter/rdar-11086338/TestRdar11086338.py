"""
Test lldb data formatter subsystem.
"""

import os, time
import unittest2
import lldb
from lldbtest import *
import datetime
import lldbutil

class DataFormatterRdar11086338TestCase(TestBase):

    mydir = os.path.join("functionalities", "data-formatter", "rdar-11086338")

    @unittest2.skipUnless(sys.platform.startswith("darwin"), "requires Darwin")
    @dsym_test
    def test_rdar11086338_with_dsym_and_run_command(self):
        """Test that NSArray reports its synthetic children properly."""
        self.buildDsym()
        self.rdar11086338_tester()

    @unittest2.skipUnless(sys.platform.startswith("darwin"), "requires Darwin")
    @dwarf_test
    def test_rdar11086338_with_dwarf_and_run_command(self):
        """Test that NSArray reports its synthetic children properly."""
        self.buildDwarf()
        self.rdar11086338_tester()

    def setUp(self):
        # Call super's setUp().
        TestBase.setUp(self)
        # Find the line number to break at.
        self.line = line_number('main.m', '// Set break point at this line.')

    def rdar11086338_tester(self):
        """Test that NSArray reports its synthetic children properly."""
        self.runCmd("file a.out", CURRENT_EXECUTABLE_SET)

        lldbutil.run_break_set_by_file_and_line (self, "main.m", self.line, num_expected_locations=1, loc_exact=True)

        self.runCmd("run", RUN_SUCCEEDED)

        # The stop reason of the thread should be breakpoint.
        self.expect("thread list", STOPPED_DUE_TO_BREAKPOINT,
            substrs = ['stopped',
                       'stop reason = breakpoint'])

        # This is the function to remove the custom formats in order to have a
        # clean slate for the next test case.
        def cleanup():
            self.runCmd('type format clear', check=False)
            self.runCmd('type summary clear', check=False)
            self.runCmd('type synth clear', check=False)

        # Execute the cleanup function during test case tear down.
        self.addTearDownHook(cleanup)

        # Now check that we are displaying Cocoa classes correctly
        self.expect('frame variable arr',
                    substrs = ['@"6 objects"'])
        self.expect('frame variable other_arr',
                    substrs = ['@"4 objects"'])
        self.expect('frame variable arr --ptr-depth 1',
                    substrs = ['@"6 objects"','[0] = 0x','[1] = 0x','[2] = 0x','[3] = 0x','[4] = 0x','[5] = 0x'])
        self.expect('frame variable other_arr --ptr-depth 1',
                    substrs = ['@"4 objects"','[0] = 0x','[1] = 0x','[2] = 0x','[3] = 0x'])
        self.expect('frame variable arr --ptr-depth 1 -d no-run-target',
                    substrs = ['@"6 objects"','@"hello"','@"world"','@"this"','@"is"','@"me"','@"http://www.apple.com'])
        self.expect('frame variable other_arr --ptr-depth 1 -d no-run-target',
                    substrs = ['@"4 objects"','(int)5','@"a string"','@"6 objects"'])
        self.expect('frame variable other_arr --ptr-depth 2 -d no-run-target',
                    substrs = ['@"4 objects"','@"6 objects" {','@"hello"','@"world"','@"this"','@"is"','@"me"','@"http://www.apple.com'])

        self.assertTrue(self.frame().FindVariable("arr").MightHaveChildren(), "arr says it does not have children!")
        self.assertTrue(self.frame().FindVariable("other_arr").MightHaveChildren(), "arr says it does not have children!")


if __name__ == '__main__':
    import atexit
    lldb.SBDebugger.Initialize()
    atexit.register(lambda: lldb.SBDebugger.Terminate())
    unittest2.main()
