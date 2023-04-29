#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of linked list
 * @head: is a double pointer to the list_t list
 * @str: Adds new string to the node
 *
 * Return: the address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *pnw;
	unsigned int len = 0;

	while (str[len])
		len++;

	pnw = malloc(sizeof(list_t));
	if (!pnw)
		return (NULL);

	pnw->str = strdup(str);
	pnw->len = len;
	pnw->next = (*head);
	(*head) = pnw;

	return (*head);
}
