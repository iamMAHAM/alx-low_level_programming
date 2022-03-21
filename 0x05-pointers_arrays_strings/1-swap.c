#include "main.h"
/**
 * swap_int - swaps a value of two integers
 * @a: int 1
 * @b: int 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

