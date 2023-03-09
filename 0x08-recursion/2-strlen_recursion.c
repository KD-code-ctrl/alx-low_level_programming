#include "main.h"

/**
 * _strlen_recursion - is a function that finds the  length
 * of a string
 * @s: is a string pointer
 * Return: int value of the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
