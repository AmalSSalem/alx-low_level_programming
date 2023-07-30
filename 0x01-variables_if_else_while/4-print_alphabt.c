#include <stdio.h>

/**
 * main - code is in it
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z' && i != 'e' && i != 'q'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
