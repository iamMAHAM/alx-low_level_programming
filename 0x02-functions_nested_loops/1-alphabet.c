#include "main.h"

/**
 * print_alphabet - find the alphabet letters in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char charac = a;

	while (charac <= "z")
	{
		_putchar(charac);
		charac++;
	}
	_putchar('\n')
}
