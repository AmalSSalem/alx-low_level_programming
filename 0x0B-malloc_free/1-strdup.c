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
	i = 0;
	array = malloc(sizeof(str));
	i = (sizeof(array) / sizeof(int));
	while (i >= 0)
	{
		array[i] = str[i];
		i--;
	}
	return (array);
}
