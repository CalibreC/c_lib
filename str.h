/**
 * @file str.h
 * @author fudu (fudu@zmvision.cn)
 * @brief
 * @version 0.1
 * @date 2023-01-15
 *
 * ZMVISION Copyright (c) 2023
 *
 */

#ifndef __STR_H__
#define __STR_H__

// TODO: 尝试使用C的索引

#include <stdarg.h>

/**
 * 可能导致内存分配
 */
extern char *Str_sub(const char *s, int i, int j);
// n为dup次数
extern char *Str_dup(const char *s, int i, int j, int n);
extern char *Str_cat(const char *s1, int i1, int j1,
                     const char *s2, int i2, int j2);
// 多字符串catv，用法与cat类似，最后一个参数需要设置为NULL
extern char *Str_catv(const char *s, ...);
// 将sub后的字符串反序
extern char *Str_reverse(const char *s, int i, int j);
// 如果在s中出现from里的字符，将其映射为to中对应字符
// 如果from,to均为NULL，则使用最近一次映射
extern char *Str_map(const char *s, int i, int j,
                     const char *from, const char *to);

/*--------------------------------------------------------------*/

/**
 * 返回字符串或位置信息
 */

/* 返回正序索引 */
extern int Str_pos(const char *s, int i);
extern int Str_len(const char *s, int i, int j);
/* 小于 等于 大于 返回 负数 0 正数 */
extern int Str_cmp(const char *s1, int i1, int j1,
                   const char *s2, int i2, int j2);

/*--------------------------------------------------------------*/

/**
 * 搜索字符串，查找字符以及其他字符串
 */

/* 未找到返回0 */
extern int Str_chr(const char *s, int i, int j, int c);
extern int Str_rchr(const char *s, int i, int j, int c);

/* 搜索集合中的字符 */
extern int Str_upto(const char *s, int i, int j,
                    const char *set);
extern int Str_rupto(const char *s, int i, int j,
                     const char *set);

extern int Str_find(const char *s, int i, int j,
                    const char *str);
extern int Str_rfind(const char *s, int i, int j,
                     const char *str);

/*--------------------------------------------------------------*/

/**
 * 遍历字符串，返回匹配的子串之后或之前的正数位置
 */

/* s[i]不出现在set中，返回0 */
extern int Str_any(const char *s, int i,
                   const char *set);

extern int Str_many(const char *s, int i, int j,
                    const char *set);
extern int Str_rmany(const char *s, int i, int j,
                     const char *set);

extern int Str_match(const char *s, int i, int j,
                     const char *str);
extern int Str_rmatch(const char *s, int i, int j,
                      const char *str);

/*--------------------------------------------------------------*/                  
extern void Str_fmt(int code, va_list *app,
                    int put(int c, void *cl), void *cl,
                    unsigned char flags[], int width, int precision);

#undef T

#ifdef C_LIB_TEST
int strTest(int argc, char **argv);
#endif

#endif
