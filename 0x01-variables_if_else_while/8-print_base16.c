#include <stdio.h>
/**
 * main - description here
 * Return: 0;
 */
int main(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	for (ch = 'a'; ch  <= 'e'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
