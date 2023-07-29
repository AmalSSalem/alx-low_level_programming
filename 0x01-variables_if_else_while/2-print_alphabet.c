#include <stdio.h>

/**
 * main - code should be here
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a', i <= 'z', i++)
		putchar(i);
	putchar('\n');

	return (0);
}
