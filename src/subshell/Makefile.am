noinst_LTLIBRARIES = libsubshell.la

libsubshell_la_SOURCES = \
	common.c \
	internal.h \
	proxyfunc.c \
	subshell.h

AM_CPPFLAGS = -DSYSCONFDIR=\""$(sysconfdir)/@PACKAGE@/"\" \
	-I$(top_srcdir) \
	$(GLIB_CFLAGS)
