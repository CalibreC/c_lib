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
    const char *atom_str = NULL;

    char str[] = {"atom string test"};

    atom_str = Atom_string(str);
    // atom_str = Atom_int(4727);

    printf("%s", Atom_string(atom_str));

    return 0;
}
