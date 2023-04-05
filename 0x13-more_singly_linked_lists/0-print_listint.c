#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_listint - is a function that prints the elements of a list
 * @h: is a pointer to a list struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
