#include "lists.h"

/**
 * add_dnodeint - adding a new node at the beginning
 * of a dlistint_t list
 * Created by Chukwudike Igwe
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));/** size of malloc */
	if (new == NULL)
		return (NULL);/** Returning NULL */

	new->n = n;
	new->prev = NULL;
	h = *head;/** h = all head */

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;/** prev -> h */
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;/** New = prev */

	*head = new;

	return (new);/** Returning the New */
}
