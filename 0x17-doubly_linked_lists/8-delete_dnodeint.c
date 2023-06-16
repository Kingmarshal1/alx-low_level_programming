#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting the node at index of a
 * dlistint_t linked list
 * Created by Chukwudike Igwe
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i;

	h1 = *head;/** head h1 */

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;/** prev h1 */

	i = 0;

	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;/** next head */
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;/** next h1 */

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);/** returning 1 */
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);/** returning -1 */
}
