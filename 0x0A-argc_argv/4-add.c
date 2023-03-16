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
	int i, j, result, st_len;

	if (argc >= 3)
	{
		result = 0;
		for (i = 1 ; i < argc ; i++)
		{
			st_len = strlen(argv[i]);
			for (j = 0; j < st_len ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", result);
	return (0);
}
