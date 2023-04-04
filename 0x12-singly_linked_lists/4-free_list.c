#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - is a function that frees memory
 * @head: is a pointer to  struct
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
