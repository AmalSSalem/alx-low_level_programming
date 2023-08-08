#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: a pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
		return (NULL);
	array = malloc(sizeof(str));
	i = (sizeof(str[]) / sizeof(str[0]));
	while (i >= 0)
	{
		array[i] = str[i];
		i--;
	}
	return (array);
}