#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - ia function that takes command line arguments and performs
 * arithmetic
 * @argc: is number of arguments
 * @argv: is the array of arguments
 * Return: prints the results
 */
int main(int argc, char *argv[])
{
	int result, a, b;
	int (*func_ptr)(int, int);
	char *opt;
	if (argc < 4 || argv[2] == NULL)
	{
		printf("Error\n");
	       	exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opt = argv[2];
	func_ptr = get_op_func(opt);
	if (func_ptr == NULL || opt[1] != '\0')
	{
		printf ("Error\n");
		exit(99);
	}
	if ((a == 0 || b == 0) && (*opt == '/' || *opt == '%'))
	{
		printf ("Error\n");
		exit(100);
	}
	result  = func_ptr(a, b);
	printf("%d\n", result);
	return (0);
}
