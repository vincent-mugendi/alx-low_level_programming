#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @n: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *n)
{
	if (*s)
	{
		_putchar(*n);
		_puts_recursion(n + 1);
	}

	else
		_putchar('\n');
}
