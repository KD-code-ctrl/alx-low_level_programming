#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: is a pointer variable to the string
 * Return:0 when successful
 */
int _strlen(char *s)
{
	int t

	t = 0;
	while(*s != '\0')
	{
		t++;
		s++;
	}
	return (t);
}
