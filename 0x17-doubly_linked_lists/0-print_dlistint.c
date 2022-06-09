#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);

	while (h)
	{
		length++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (length);
}
