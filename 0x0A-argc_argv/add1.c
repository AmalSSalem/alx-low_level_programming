#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - your code is written here
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0 if arguments valid 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	for (i = 1; i <= argc; i++)
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	return (0);
}
