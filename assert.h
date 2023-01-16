/**
 * @file assert.h
 * @author fudu (fudu@zmvision.cn)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * ZMVISION Copyright (c) 2023
 *
 */

#undef assert
#ifdef NDEBUG
#define assert(e) ((void)0)
#else
#include "except.h"
extern void assert(int e);
#define assert(e) ((void)((e) || (RAISE(Assert_Failed), 0)))
#endif