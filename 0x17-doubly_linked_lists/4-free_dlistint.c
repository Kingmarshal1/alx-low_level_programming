#include "lists.h"

/**
 * free_dlistint - freeing a dlistint_t list
 * Created by Chukwudike Igwe
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;/** prev head */

	while ((tmp = head) != NULL)
	{
		head = head->next;/** next head */
		free(tmp);
	}
}
