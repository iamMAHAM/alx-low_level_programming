#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print
{
	char *str;
	void (*T_func)(va_list)
} t_print;
#endif
