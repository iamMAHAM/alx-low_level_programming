#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returm sum of args
 * @n: number of args
 * @...: others args
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	double sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
