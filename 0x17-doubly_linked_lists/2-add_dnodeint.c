#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: the node
 * @n: number to add in a node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new) /*malloc failed*/
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}