#include "lists.h"

/**
 * print_dlistint - printing all the elements of a
 * dlistint_t list
 * Created by Chukwudike Igwe
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);/** returning count */

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);/** printing f h=>n */
		count++;
		h = h->next;
	}

	return (count);/** returning the count */
}
