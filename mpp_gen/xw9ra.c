/*
___  ___                 ______          _           _
|  \/  |                 | ___ \        (_)         | |
| .  . |_ __  _ __ ______| |_/ / __ ___  _  ___  ___| |_
| |\/| | '_ \| '_ \______|  __/ '__/ _ \| |/ _ \/ __| __|
| |  | | |_) | |_) |     | |  | | | (_) | |  __/ (__| |_
\_|  |_/ .__/| .__/      \_|  |_|  \___/| |\___|\___|\__|
       | |   | |                       _/ |
       |_|   |_|                      |__/

[+]MPP is a C-based programming language that allows you to code more easily in Darija.
[+]Author : Naper & XDarker
[+]Web site : www.naper.eu
[+]Web site : mpp-project.org

*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <wchar.h>
#include <wctype.h>
#include <bits/libc-lock.h>
#include "../include/xw9ra.h"

#ifdef	__GNUC__
# define HAVE_LONGLONG
# define LONGLONG	long long
#else
# define LONGLONG	long
#endif
#if LONG_MAX == LONG_LONG_MAX
# define need_longlong	0
#else
# define need_longlong	1
#endif
#if INT_MAX == LONG_MAX
# define need_long	0
#else
# define need_long	1
#endif
#define LONG		0x0001	/* l: long or double */
#define LONGDBL		0x0002	/* L: long long or long double */
#define SHORT		0x0004	/* h: short */
#define SUPPRESS	0x0008	/* *: suppress assignment */
#define POINTER		0x0010	/* weird %p pointer (`fake hex') */
#define NOSKIP		0x0020	/* do not skip blanks */
#define NUMBER_SIGNED	0x0040	/* signed integer */
#define GROUP		0x0080	/* ': group numbers */
#define GNU_MALLOC	0x0100	/* a: malloc strings */
#define CHAR		0x0200	/* hh: char */
#define I18N		0x0400	/* I: use locale's digits */
#define HEXA_FLOAT	0x0800	/* hexadecimal float */
#define READ_POINTER	0x1000	/* this is a pointer value */
#define POSIX_MALLOC	0x2000	/* m: malloc strings */
#define MALLOC		(GNU_MALLOC | POSIX_MALLOC)

int __xw9ra(FILE *s, const char *format, va_list argptr)
{
  return xIO_vfscanf_internal (s, format, argptr, NULL);
}