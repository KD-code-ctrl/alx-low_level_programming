#include "main.h"

/**
 * rev_string - is  a function that reverses a string
 * @s: is a pointer variable
 * Return:0 when successful
 */
void rev_string(char *s)
{
	int i, x, middle;
	char store;/*to store our variable*/

	/*while loop to find the length of string*/
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	middle = i / 2;

	for (x = 0 ; x < middle ; x++)
	{
		store = s[x];/*storing the first letter in the str*/
		s[x] = s[i - x - 1];
		s[i - x - 1] = store;
	}
}

