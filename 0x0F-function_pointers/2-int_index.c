#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: a pointer to an array
 * @size: an array size
 * @cmp: is a pointer to the function to be used to compare values
 * Return: 0 otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
