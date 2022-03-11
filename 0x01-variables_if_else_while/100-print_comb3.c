#include <stdio.h>
/**
 * main - description here
 * Return: 0;
 */
int main(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (j != i && j < i)
			{
				putchar('0' + j);
				putchar('0' + i);

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

