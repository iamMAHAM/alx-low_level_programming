#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that duplicate string
 * @str: a string to dup
 * Return: a pointer of a char
 */
char *_strdup(char *str)
{
	int length  = 0;
	int i = 0;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	dup = malloc((1 + length) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	
	while (i <= length)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);

}
