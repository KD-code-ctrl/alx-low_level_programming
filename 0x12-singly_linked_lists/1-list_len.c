#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a
 * linked list
 * @h: is a pointer to a structure
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int num_el = 0;

	while (h != NULL)
	{
		num_el++;
		h = h->next;
	}
	return (num_el);
}
