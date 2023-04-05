#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node
 * @head: is a pointer to struct
 * @index: is  the nth position of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
