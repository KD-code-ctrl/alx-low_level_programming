#include "main.h"

/**
 * leet - is a function that encodes a string with numbers
 * @s: is a pointer to a string
 * Return: a string tha is encoded
 */
char *leet(char *s)
{
	int i, n;

	char letter[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int num[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int size_letter = sizeof(letter) / sizeof(letter[0]);

	for (i = 0 ; i <= size_letter ; i++)
	{
		for (n = 0 ; s[n] != '\0' ; n++)
		{
			if (letter[i] == s[n])
			{
				s[n] = num[i] + '0';
			}
		}
	}
	return (s);
}
