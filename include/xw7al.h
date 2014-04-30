#ifdef _LIBC
# include <shlib-compat.h>
#else
# define _IO_new_fopen vfopen
#define xw7al fopen
#endif
/*
_IO_FILE *
_IO_new_vfopen (filename, mode);
*/