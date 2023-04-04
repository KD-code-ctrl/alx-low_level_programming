#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node_end - is a function that adds a new node at the end of the list
 * @head: is a pointer to a pointer of type 'list_t'
 * @str: is a pointer to string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *current = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = temp;
	return (temp);
}
