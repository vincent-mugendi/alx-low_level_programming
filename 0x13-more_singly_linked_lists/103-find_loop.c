#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pslow = head;
	listint_t *pfast = head;

	/* if statement */
	if (!head)
		return (NULL);

	while (pslow && pfast && pfast->next)
	{
		pfast = pfast->next->next;
		pslow = pslow->next;
		if (pfast == pslow)
		{
			pslow = head;
			while (pslow != pfast)
			{
				pslow = pslow->next;
				pfast = pfast->next;
			}
			return (pfast);
		}
	}

	return (NULL);
}
