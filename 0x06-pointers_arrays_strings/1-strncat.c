#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination to concatinate to
 * @src: source concatenate from
 * @n: int n from source
 * Return:  a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
		if (src[j] == '\0')
			break;
	}
	return (dest);
}
