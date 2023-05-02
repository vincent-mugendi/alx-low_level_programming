#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * @head: is the pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ptmp;

	if (head == NULL)
		return;

	while (*head)
	{
		ptmp = (*head)->next;
		free(*head);
		*head = ptmp;
	}

	*head = NULL;
}
