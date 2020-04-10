#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([hello], [1.0], [BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AM_PROG_AR

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lfolder':
AC_CHECK_LIB([folder], [get_temp_folder])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_ARG_ENABLE([debug],
    [ --enable-debug Turn on debugging],
    [case "${enableval}" in
        yes) debug=true ;;
        no) debug=false ;;
        *) AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
    esac],
    [debug=false])
AM_CONDITIONAL([DEBUG], [test x$debug = xtrue])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_MACRO_DIR([m4])
LT_INIT


AC_CONFIG_FILES([Makefile
                src/Makefile                 
                test/Makefile])
AC_OUTPUT
