#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * This program prints text, numbers asn inside quotes
 * compiled and run on.
 * gcc
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
