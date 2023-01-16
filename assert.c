/**
 * @file assert.c
 * @author fudu (fudu@zmvision.cn)
 * @brief
 * @version 0.1
 * @date 2023-01-17
 *
 * ZMVISION Copyright (c) 2023
 *
 */

#include "assert.h"

const Except_T Assert_Failed = {"Assertion failed"};

void (assert)(int e)
{
    assert(e);
}