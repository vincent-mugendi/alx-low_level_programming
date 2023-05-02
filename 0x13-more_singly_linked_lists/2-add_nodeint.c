#include "lists.h"

/**
 * add_nodeint - adds new node at the start of a linked list
 * @head: pointer to the first node in the linked list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
