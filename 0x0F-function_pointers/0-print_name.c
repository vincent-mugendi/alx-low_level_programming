#include <stdio.h>

/**
 * print_name - prints a name
 *
 * return: void on success
 */

void print_name(char *name, void (*f)(char *))
{
	pintf("My name is %s\n", name);
}

/**
 * main - prints a name
 *
 * return: an int on sucess
 */

int main(void)
{
	char (*pname)(char *name, void (*f) (char *));
	pname = &name;
	printf("%s", pname);

	return (0);
}
