#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocates memory for an array
 * @nmemb: number of element
 * @size: type of element
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int total_numbers = 0, i = 0;

	if (min > max)
		return (NULL);
	
	total_numbers = max - min + 1;
	ptr = malloc(sizeof(int) * total_numbers);
	if (ptr == NULL)
		return (NULL);
	
	for (; i <= max; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
