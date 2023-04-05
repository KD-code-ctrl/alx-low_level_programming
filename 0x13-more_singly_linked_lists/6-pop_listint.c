#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - is a function that deletes the head node of a list
 * @head: is a pointer to a struct
 * Return: heads node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	i = 0;
	if (head == NULL)
	{
		return (0);
	}
	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		i = temp->n;
		free(temp);
	}
	return (i);
}
