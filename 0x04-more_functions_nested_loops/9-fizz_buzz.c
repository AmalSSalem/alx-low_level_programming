#include <stdio>

/**
 * FizzBuzz - prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of
 * three print fizz
 * multiples of five print Buzz
 * both print FizzBuzz
 */
void FizzBuzz(void)
{
	int i;
	
	for (i = 1; i <= 100;i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf( "%d ",i);
		}
	}
}
