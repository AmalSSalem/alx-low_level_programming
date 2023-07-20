#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		for(int i = 0; i < 10; i++)
			_putchar(c);
		c++;

	}
	_putchar('\n');
}
