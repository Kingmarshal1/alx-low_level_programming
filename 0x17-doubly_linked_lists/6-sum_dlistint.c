#include "lists.h"

/**
 * sum_dlistint - returning the sum of all the data (n)
 * of a doubly linked list
 * Created by Chukwudike Igwe
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;/** summing to 0 */

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;/** prev head */

		while (head != NULL)
		{
			sum += head->n;/** summing the head */
			head = head->next;
		}
	}

	return (sum);/** returning the sum */
}
