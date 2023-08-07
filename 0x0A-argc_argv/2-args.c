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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
