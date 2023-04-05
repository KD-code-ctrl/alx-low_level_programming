#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - is a function that adds a node at the end of the list
 * @head: is a pointer to pointer of a struct
 * @n: is a integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *plc_holder = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head  = temp;
		return (temp);
	}
	while ((plc_holder->next) != NULL)
	{
		plc_holder  = plc_holder->next;
	}
	plc_holder->next = temp;
	return (temp);
}
