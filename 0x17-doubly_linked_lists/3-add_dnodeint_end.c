#include "lists.h"

/**
 * add_dnodeint_end - add node end 
 * @head: the head
 * @n: the number
 * Return: added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	if (!head)
		return (NULL);
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next)
		current = current->next;
	
	current->next = new;
	new->prev = current;

	return (new);
}
