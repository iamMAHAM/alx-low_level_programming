#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: the head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
