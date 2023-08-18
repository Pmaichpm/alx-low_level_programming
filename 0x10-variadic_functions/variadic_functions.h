#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_int(char *s, va_list ls);

void print_char(char *s, va_list ls);

void print_str(char *s, va_list ls);

void print_flt(va_list ls, char *s)

#endif
