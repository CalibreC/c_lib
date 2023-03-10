/**
 * @file fmt.h
 * @author fudu (fudu@zmvision.cn)
 * @brief 
 * @version 0.1
 * @date 2023-01-17
 * 
 * ZMVISION Copyright (c) 2023
 * 
 */

#ifndef __FMT_H__
#define __FMT_H__

#include <stdarg.h>
#include <stdio.h>
#include "except.h"

#define T Fmt_T
typedef void (*T)(int code, va_list *app,
                  int put(int c, void *cl), void *cl,
                  unsigned char flags[256], int width, int precision);
extern char *Fmt_flags;
extern const Except_T Fmt_Overflow;

extern void Fmt_fmt(int put(int c, void *cl), void *cl,
                    const char *fmt, ...);
extern void Fmt_vfmt(int put(int c, void *cl), void *cl,
                     const char *fmt, va_list ap);

/*---------------------------------------------------------------*/

/**
 * 对应C库函数printf,fprintf,sprintf,vsprintf 
 */
extern void Fmt_print(const char *fmt, ...);
extern void Fmt_fprint(FILE *stream,
                       const char *fmt, ...);
extern int Fmt_sfmt(char *buf, int size,
                    const char *fmt, ...);
extern int Fmt_vsfmt(char *buf, int size,
                     const char *fmt, va_list ap);

/* 与Fmt_sfmt,Fmt_vsfmt相同 */
extern char *Fmt_string(const char *fmt, ...);
extern char *Fmt_vstring(const char *fmt, va_list ap);

/*---------------------------------------------------------------*/

extern T Fmt_register(int code, T cvt);
extern void Fmt_putd(const char *str, int len,
                     int put(int c, void *cl), void *cl,
                     unsigned char flags[256], int width, int precision);
extern void Fmt_puts(const char *str, int len,
                     int put(int c, void *cl), void *cl,
                     unsigned char flags[256], int width, int precision);

#undef T

#ifdef C_LIB_TEST
int fmtTest(int argc, char **argv);
#endif

#endif
