#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free;

	while (head)
	{
		to_free = head->next;
		free(to_free);
		head = to_free;
	}
}
