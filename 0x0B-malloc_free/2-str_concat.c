#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenate 2 strings
 * @s1: a string 1
 * @s2: a string two
 * Return: a pointer of a char
 */
char *str_concat(char *s1, char *s2)
{
	int length1  = 0;
	int length2 = 0;
	int i = 0;
	int j = 0;
	char *conc = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}
	conc = malloc((length1 + length2 + 1) * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	return (conc);
}
