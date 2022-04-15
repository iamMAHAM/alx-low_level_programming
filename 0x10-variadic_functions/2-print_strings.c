#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings separated by separator
 * @separator: the separator
 * @n: the number of args
 * @...: unknows args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	if (n > 0)
	{
		for (; i < n; i++)
		{
			printf("%s", va_arg(args, char *));
			if ((i != n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
