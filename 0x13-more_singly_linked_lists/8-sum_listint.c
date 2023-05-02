#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	int sum_nodes = 0;
	listint_t *ptmp = head;

	while (ptmp)
	{
		sum_nodes += ptmp->n;
		ptmp = ptmp->next;
	}

	return (sum_nodes);
}
