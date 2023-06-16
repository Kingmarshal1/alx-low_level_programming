#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 * Created by Chukwudike Igwe
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);/** Returning the count */

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;/** count ++ */
		h = h->next;
	}

	return (count);/** Returning the count */
}
