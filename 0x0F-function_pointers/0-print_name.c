#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: pointer to the function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
