/* Generated by ./xlat/gen.sh from ./xlat/quota_formats.in; do not edit. */

static const struct xlat quota_formats[] = {
#if defined(QFMT_VFS_OLD) || (defined(HAVE_DECL_QFMT_VFS_OLD) && HAVE_DECL_QFMT_VFS_OLD)
	XLAT(QFMT_VFS_OLD),
#endif
#if defined(QFMT_VFS_V0) || (defined(HAVE_DECL_QFMT_VFS_V0) && HAVE_DECL_QFMT_VFS_V0)
	XLAT(QFMT_VFS_V0),
#endif
	XLAT_END
};
