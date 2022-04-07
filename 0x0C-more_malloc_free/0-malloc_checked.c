#include "main.h"
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return 98;
	}
}
