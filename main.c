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
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "except.h"
#include "arith.h"
#include "atom.h"
#include "stack.h"

int main(int argc, char **argv)
{

#ifdef C_LIB_TEST
    if (argc == 3 && !strcasecmp(argv[1], "test"))
    {
        if (!strcasecmp(argv[2], "atom"))
        {
            return atomTest(argc, argv);
        }

        return -1; /* test not found */
    }
#endif

    printf("hello world\n");

    return 0;
}
