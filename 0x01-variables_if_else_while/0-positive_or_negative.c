#include <stdio.h>
#include <time.h>

/**
 * main - main function code is written here
 * Return: 0
 */
int main(void)
{
	int n;

	srant(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("is zero");
	else if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negative");
	return (0);
}
