#include <stdlib.h>
#include <stdio.h>

/**
 * main - is a program that prints its name
 * @argc: represents number of arguments
 * @argv: represents the argument
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
