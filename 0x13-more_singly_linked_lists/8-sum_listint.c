#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - is a function that return sum of all data
 * @head: is a pointer to struct
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
