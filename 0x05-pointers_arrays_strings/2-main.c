#include "main.h"
#include <stdio.h>

/**
 * main - has a fuction strlen that checks the length of a string
 * Return:0 always
 */
int main(void)
{
       	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
