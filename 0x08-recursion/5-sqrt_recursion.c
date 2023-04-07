#include "main.h"

int actual_sqrt_recursion(int c, int v);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @c: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int c)
{
	if (c < 0)
		return (-1);
	return (actual_sqrt_recursion(c, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @c: number to calculate the sqaure root of
 * @v: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int c, int v)
{
	if (i * i > c)
		return (-1);
	if (i * i == c)
		return (i);
	return (actual_sqrt_recursion(v, i + 1));
}
