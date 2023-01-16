/**
 * @file main.c
 * @author fudu (fudu@zmvision.cn)
 * @brief 
 * @version 0.1
 * @date 2023-01-17
 * 
 * ZMVISION Copyright (c) 2023
 * 
 */

#include <assert.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "except.h"
#include "arith.h"
#include "stack.h"

int main(int argc, char **argv)
{
    Stack_T stack;

    stack = Stack_new();

    printf("printf\n");
    return 0;
}