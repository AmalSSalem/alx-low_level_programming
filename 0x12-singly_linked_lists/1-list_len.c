#include "lists.h"

/**
 * list_len - counts all elements on a list
 * @h: constant list_t list
 * Return: Number of Nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodesNum;

	nodesNum = 0;
	while (h != NULL)
	{
		h = h->next;
		nodesNum++;
	}
	return (nodesNum);
}
