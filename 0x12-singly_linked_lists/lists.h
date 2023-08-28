#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * list - a structure list
 * @str: the string stored
 * @len: the length of a string
 * @next: pointer to next
 */
struct list
{
	char *str;
	int len;
	struct list *next;
};
typedef struct list list_t;

size_t print_list(const list_t *h);
#endif
