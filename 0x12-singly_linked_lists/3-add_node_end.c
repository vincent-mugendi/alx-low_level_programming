#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a new node is added at the end of linked list
 * @head: is a double pointer to the list_t list
 * @str: is the string to put in the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pnw;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	pnw = malloc(sizeof(list_t));
	if (!pnw)
		return (NULL);

	pnw->str = strdup(str);
	pnw->len = len;
	pnw->next = NULL;

	if (*head == NULL)
	{
		*head = pnw;
		return (pnw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = pnw;

	return (pnw);
}
