#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([helloworld], [0.0.1], [thaugdahl@gmail.com])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC([gcc clang])
AC_PROG_INSTALL

have_ptrheads=no

# Checks for libraries.
AC_SEARCH_LIBS([pthread_create], [pthread])

dnl This is how you can gauge whether the library function can be used
if test "${ac_cv_search_pthread_create}" == "no"; then
    AC_MSG_ERROR([Failed to find pthread_create])
fi

# Checks for header files.
AC_CHECK_HEADERS([unistd.h foobar.h pthread.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
#

AC_CONFIG_FILES([Makefile
                 src/Makefile])

AC_CONFIG_COMMANDS([output],
                [echo "Testing $mypackagename"],
                [mypackagename=$PACKAGE_NAME])




AC_OUTPUT
