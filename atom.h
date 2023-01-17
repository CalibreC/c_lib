/**
 * @file atom.h
 * @author fudu (fudu@zmvision.cn)
 * @brief 
 * @version 0.1
 * @date 2023-01-17
 * 
 * ZMVISION Copyright (c) 2023
 * 
 */

#ifndef __ATOM_H__
#define __ATOM_H__

extern int Atom_length(const char *str);
extern const char *Atom_new(const char *str, int len);
extern const char *Atom_string(const char *str);
extern const char *Atom_int(long n);

#endif