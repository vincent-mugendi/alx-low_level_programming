#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: is the pointer to the first element in the linked list
 *
 * Return: data inside the elements that was deleted,
 * or returns 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptmp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	ptmp = (*head)->next;
	free(*head);
	*head = ptmp;

	return (number);
}
