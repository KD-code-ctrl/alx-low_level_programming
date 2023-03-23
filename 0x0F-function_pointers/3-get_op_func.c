#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - is a function that select the correct function to call
 * @s: is operator
 * Return: pointer to the function that corresponds to the operator given
 * as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
