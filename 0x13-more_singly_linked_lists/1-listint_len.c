#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - is function that returns the number of elements in a list
 * @h: is a pointer to a list struct type
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
