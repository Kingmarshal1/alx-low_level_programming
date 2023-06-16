#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * Created by Chukwudike Igwe
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));/** size of malloc */
	if (new == NULL)
		return (NULL);/** Returning NULL */

	new->n = n;
	new->next = NULL;

	h = *head;/** h = all head */

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;/** next new */
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);/** Returning the new */
}
