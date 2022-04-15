#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number separated by separator
 * @separator: the separator
 * @n: the number of args
 * @...: unknows args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;


	va_start(args, n);
	if (n > 0)
	{
		for (; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if ((i != n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
