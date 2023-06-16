#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting a new node at
 * a given position
 * Created by Chukwudike Igwe
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int i;

	new = NULL;/** NULL the new */
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;/** heading h */
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;/** prev head */
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);/** new add dnodeint end */
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;/** prev head */
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;/** head next */
			i++;
		}
	}

	return (new);/** returning the new */
}
