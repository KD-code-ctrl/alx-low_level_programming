#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - is a function that add a new node
 * @head:  is a pointer to a pointer of  type struct
 * @n: is an integer
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;
	return (temp);
}

