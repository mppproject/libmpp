
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
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#ifdef _LIBC
# include <shlib-compat.h>
#else
# define _IO_new_fopen vvfopen
#endif
_IO_FILE *
_IO_new_fopen (filename, mode)

     const char *filename;
     const char *mode;
{
  //return __fopen_internal (filename, mode, 1);

}