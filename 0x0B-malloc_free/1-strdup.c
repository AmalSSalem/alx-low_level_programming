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
	int i,j;

	i = j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (NULL);
	while ((array[j] = str[j]) != '\0')
		j++;
	return (array);
}
