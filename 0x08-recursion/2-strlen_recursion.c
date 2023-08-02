#include "main.h"

/**
 * _strlen_recursion - get length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		_strlen_recursion((s + 1));
		i++;
	}
	return i;
