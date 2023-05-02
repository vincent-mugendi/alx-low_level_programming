#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a
 * linked list
 *
 * @head: is the first node in the linked list
 * @index: is the index of the node to return
 *
 * Return: is pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptmp = head;

	while (ptmp && i < index)
	{
		ptmp = ptmp->next;
		i++;
	}

	return (ptmp ? ptmp : NULL);
}
