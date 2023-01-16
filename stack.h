/**
 * @file stack.h
 * @author fudu (fudu@zmvision.cn)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * ZMVISION Copyright (c) 2023
 *
 */

#ifndef __STACK_INCLUDED__
#define __STACK_INCLUDED__

#define T Stack_T
typedef struct T *T;

extern T Stack_new(void);
extern int Stack_empty(T stk);
extern void Stack_push(T stk, void *x);
extern void *Stack_pop(T stk);
extern void Stack_free(T *stk);

#undef T
#endif