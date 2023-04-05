#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - is a function frees a list
 * @head: is a pointer to type struct
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
