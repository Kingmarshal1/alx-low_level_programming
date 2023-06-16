#include "lists.h"

/**
 * get_dnodeint_at_index - returning the
 * nth node of a dlistint_t linked list
 * Created by Chukwudike Igwe
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);/** returning NULL */

	while (head->prev != NULL)
		head = head->prev;/** head prev */

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;/** next head */
		i++;
	}

	return (head);/** returning head */
}
