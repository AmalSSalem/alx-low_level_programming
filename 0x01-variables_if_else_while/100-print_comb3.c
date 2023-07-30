#include <stdio.h>

/**
 * main - code is inside it
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		for (j = i; j <= '9'; j++)
		{
			putchar(j);
			if (i == '9' && j == '9')
				break;
			else 
			{
				putchar(',');
				putchar(' ');
				if (j != '9')
					putchar(i);
			}
		}
	}
	putchar('\n');
	return (0);
}
