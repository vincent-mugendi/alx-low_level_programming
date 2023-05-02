#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: listint_t is the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *ptmp;

	while (head)
	{
		ptmp = head->next;
		free(head);
		head = ptmp;
	}
}
