#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to take sqrt for
 * Return: sqr route
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return actual_sqrt(n, 0);
}
/**
 * actual_sqrt - check if i is sqrt of n
 * @n: the square root value
 * @i: the number to check
 * Return: the resulting square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return(-1);
	else if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
