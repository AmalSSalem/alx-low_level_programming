#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @size: size of array
 * @action: the function given
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
