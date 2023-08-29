#include "lists.h"

/**
 * add_node - add new node at the beginning of the list
 * @head: the head of the list
 * @str: string value it should had
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL || head == NULL || str == NULL)
		return (NULL);
	newNode->next = (*head);
	newNode->len = strlen(str);
	newNode->str = malloc(newNode->len + 1);
	strcpy(newNode->str, str);
	*head = newNode;
	return (*head);

}
