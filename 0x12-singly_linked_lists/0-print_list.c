#include "lists.h"

/**
 * print_list - prints all elements on a list
 * @h: constant list_t list
 * Return: Number of Nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodesNum;
	list_t *pointer;

	pointer = malloc(sizeof(list_t));
	*pointer = *h;
	nodesNum = 0;
	while (pointer != NULL)
	{
		if (pointer->str == NULL)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%d] %s\n", pointer->len, pointer->str);
		pointer = pointer->next;
		nodesNum++;
	}
	free(pointer);
	return (nodesNum);
}
