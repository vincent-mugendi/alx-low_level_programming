#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: list_t shows the list that will be freed
 */
void free_list(list_t *head)
{
	list_t *ptmp;

	while (head)
	{
		ptmp = head->next;
		free(head->str);
		free(head);
		head = ptmp;
	}
}
