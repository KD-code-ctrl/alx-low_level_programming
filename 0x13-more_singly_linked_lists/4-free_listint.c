#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - is a function that frees memory
 * @head: is a pointer to struct
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
