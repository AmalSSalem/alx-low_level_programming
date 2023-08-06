#include "main.h"
#include <stdio.h>

/**
 * main - your code is written here
 * @argc: arguments count
 * @argv: arguments value
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
	else 
		printf("Error");
	printf("\n");
	return (0);
}
