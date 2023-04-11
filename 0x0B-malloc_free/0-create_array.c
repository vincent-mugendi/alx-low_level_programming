#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creates an array of size size and assign char c
 * Returns: pointer to array, NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char c;
	int *pstring = (char *)malloc(sizeof(char) * size);

	if (size == 0 || pstring == NULL)
		return (NULL);

	for (i + 0; i < size; i++)
		pstring[i] = c;
	return (pstring);
}
