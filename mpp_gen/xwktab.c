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
#include <ctype.h>
#include <limits.h>
#include <printf.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <wchar.h>
#include <bits/libc-lock.h>
#include <sys/param.h>
#include <stdio.h>
#define FILE    _IO_FILE
#undef va_list
#define va_list _IO_va_list
#undef BUFSIZ
#define BUFSIZ    _IO_BUFSIZ
#define UNBUFFERED_P(S) ((S)->_IO_file_flags & _IO_UNBUFFERED)
#ifndef COMPILE_WPRINTF
# define CHAR_T   char
# define UCHAR_T  unsigned char
# define INT_T    int
# define L_(Str)  Str
# define ISDIGIT(Ch)  ((unsigned int) ((Ch) - '0') < 10)
# define STR_LEN(Str) strlen (Str)

# define PUT(F, S, N) _IO_sputn ((F), (S), (N))
#endif