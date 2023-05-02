#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	/*initializing counter variables */
	size_t nodes_num = 0;

	/* iterating over h to check whether it points to a null address */
	while (h != NULL)
	{
		/* Printing the current node */
		printf("%d\n", h->n);
		/* moving to the next node */
		h = h->next;
		/* Incrementing the counter variable */
		nodes_num++;
	}

	/* Returning the number of nodes */
	return (nodes_num);
}
