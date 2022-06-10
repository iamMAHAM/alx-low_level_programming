#include "lists.h"

/**
 * get_dcurrentint_at_index - returns the nth current of a linked list.
 * @head: the head.
 * @index: index.
 * Return: nth current, if the current doesn't exist, returns NULL.
 **/
dlistint_t *get_dcurrentint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int cont = 0;

	while (current && cont != index)
	{
		cont++;
		current = current->next;
	}
	if (current && cont == index)
		return (current);
	return (NULL);
}
