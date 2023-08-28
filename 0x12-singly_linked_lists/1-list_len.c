#include "lists.h"

/**
 * list_len - counts all elements on a list
 * @h: constant list_t list
 * Return: Number of Nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodesNum;
	list_t *pointer;

	pointer = malloc(sizeof(list_t));
	*pointer = *h;
	nodesNum = 0;
	while (pointer != NULL)
	{
		pointer = pointer->next;
		nodesNum++;
	}
	free(pointer);
	return (nodesNum);
}
