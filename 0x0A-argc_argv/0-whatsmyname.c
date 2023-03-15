#include <stdlib.h>
#include <stdio.h>

/**
 * main - is a program that prints its name
 * @argc: represents number of arguments
 * @argv: represents the argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
