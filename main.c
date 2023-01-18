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

#ifdef ATOM_STR
    {
        const char *atom_str = NULL;

        char str[] = {"atom string test"};
        char str_bak[1024] = {0}; 

        atom_str = Atom_string(str);
        // atom_str = Atom_int(4727);

        snprintf(str_bak, sizeof str_bak, "%s\n", Atom_string(atom_str));

        printf("str_bak: %s", str_bak);
        printf("atom_str: %s", Atom_string(atom_str));
    }
#endif

    printf("hello world\n");

    return 0;
}
