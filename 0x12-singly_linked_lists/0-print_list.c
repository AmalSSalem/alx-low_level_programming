#include "lists.h"

/**
 * print_list - prints all elements on a list
 * @h: constant list_t list
 * Return: Number of Nodes
 */
size_t print_list(const list_t *h)
{ 
	size_t nodesNum;

	nodesNum = 0;
	while (h != NULL)
	{
		printf("[%d] %s", h->len, h->str);
		h = h->next;
		nodesNum++;
	}
	return (nodesNum);
}
