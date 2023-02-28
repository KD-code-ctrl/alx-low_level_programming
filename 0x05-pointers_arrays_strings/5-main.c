#include "main.h"
#include <stdio.h>

/**
 * main - calls the rev_string function
 * Return:0 always
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
