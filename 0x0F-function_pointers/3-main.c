#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - An entry point
 * @argc: number of arugument
 * @argv: an array of char
 * Return: a result
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*pointer)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	pointer = get_op_func(argv[2]);

	if (pointer == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = pointer(a, b);

	printf("%d\n", result);
	return (0);
}
