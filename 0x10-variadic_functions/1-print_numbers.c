#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number separated by separator
 * 
 * @separator: the separator
 * @n: the number of args
 * @...: unknows args 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);
	for (; i < n; i++)
	{
		if (i == n || i == 0)
			printf("%d", va_arg(args, int));
		else
		{
			if (separator == NULL)
				printf("%d", va_arg(args, int));
			else
				printf("%s%d", separator, va_arg(args, int));

		}
	}
	va_end(args);
	printf("\n");
}
