#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - is a function that deletes a node at an index
 * @head: is a pointer to a pointer struct
 * @index: is the nth position to delete the node
 * Return: 1 if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i, lst_len;


	lst_len = 0;
	temp = *head;
	while (temp != NULL)
	{
		lst_len++;
		temp = temp->next;
	}
	if (index >= lst_len)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
}

