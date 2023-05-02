#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end 
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *temp = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_n;

	return (new_n);
}
