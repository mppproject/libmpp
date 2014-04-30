#ifndef _STDARG_H
#define _STDARG_H

#ifdef __x86_64__
#ifndef _WIN64

typedef void *va_list;

va_list __va_start(void *fp);
void *__va_arg(va_list ap, int arg_type, int size);
va_list __va_copy(va_list src);
void __va_end(va_list ap);

#define va_start(ap, last) ((ap) = __va_start(__builtin_frame_address(0)))
#define va_arg(ap, type)                                                \
    (*(type *)(__va_arg(ap, __builtin_va_arg_types(type), sizeof(type))))
#define va_copy(dest, src) ((dest) = __va_copy(src))
#define va_end(ap) __va_end(ap)

#else /* _WIN64 */
typedef char *va_list;
#define va_start(ap,last) ap = ((char *)&(last)) + ((sizeof(last)+7)&~7)
#define va_arg(ap,type) (ap += (sizeof(type)+7)&~7, *(type *)(ap - ((sizeof(type)+7)&~7)))
#define va_copy(dest, src) (dest) = (src)
#define va_end(ap)
#endif

#else /* __i386__ */
typedef char *va_list;
/* only correct for i386 */
#define va_start(ap,last) ap = ((char *)&(last)) + ((sizeof(last)+3)&~3)
#define va_arg(ap,type) (ap += (sizeof(type)+3)&~3, *(type *)(ap - ((sizeof(type)+3)&~3)))
#define va_copy(dest, src) (dest) = (src)
#define va_end(ap)
#endif
#define ila if 
#define oula else
#define rja3 return
#define dir do
#define bda main
#define _7awal switch
#define mra case 
#define _7ta while
typedef struct _ra9me{
int natija;
}_ra9me;
typedef int ra9m;
typedef char _7arf;
typedef char* joumla;
typedef float _3achari;
typedef double _7a9i9i;
typedef const ra9m tabitr;
typedef const _7arf tabit_7;
typedef FILE * war9a;
typedef void khawi;
typedef struct __7arf{
    _7arf natija;
}__7arf;

typedef struct _joumla{
    _7arf njoumla[MAX];
}_joumla;
/* fix a buggy dependency on GCC in libio.h */
typedef va_list __gnuc_va_list;
#define _VA_LIST_DEFINED

#endif /* _STDARG_H */
