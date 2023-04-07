#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @n: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *n)
{
	int longit = 0;

	if (*n)
	{
		longit++;
		longit += _strlen_recursion(n + 1);
	}

	return (longit);
}
