#include "function_pointers.h"

/**
 * array_iterator - an array iterator
 * @array: a pointer to an array
 * @size: an array size
 * @action: an action to do
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
