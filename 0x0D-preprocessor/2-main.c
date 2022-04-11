#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - AN entry point
 * Return: 0  on success
 */
int main(void)
{
	int i = 0, length = 0;

	for (; __FILE__[i] != '\0'; i++)
	{
		length++;
	}
	i = 0;
	while (i < length)
	{
		_putchar(__FILE__[i]);
		i++;
	}
	_putchar('\n');

}