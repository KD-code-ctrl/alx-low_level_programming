#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - Is a function that prints all of a list
 * @h: is a pointer to structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
