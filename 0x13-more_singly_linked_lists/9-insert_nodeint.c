#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - is a function that insert
 * a new node at a given position
 * @head: is a pointer to pointer struct
 * @idx: is the nth position to insert the node
 * @n: is integer data
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp1;
	unsigned int len_list;


	if (temp == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (idx == 1)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	len_list = 0;
	temp1 = *head;
	while (temp1 != NULL && len_list < idx - 2)
	{
		len_list++;
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
	return (temp);
}
