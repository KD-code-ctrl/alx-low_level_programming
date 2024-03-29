#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - is a program that prints its name
 * @argc: represents number of arguments
 * @argv: represents the argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc >= 3)
	{
		result = 1;
		for (i = 1 ; i < argc ; i++)
		{
			result = result * atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
