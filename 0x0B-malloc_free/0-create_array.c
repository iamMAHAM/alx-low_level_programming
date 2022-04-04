#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of memory to allocate
 * @c: a char to add to an array
 * Return: a pointer of a char
 */
char *create_array(unsigned int size, char c)
{
	char *strings;
	unsigned int i = 0;

	strings = malloc(sizeof(char) * size);


	if (size == 0)
	{
		return (NULL);
	}

	if (strings == NULL)
	{
		exit(1);
	}

	while (i < size)
	{
		strings[i] = c;
		i++;
	}
	return (strings);
}
