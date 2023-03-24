#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_char - print character
 * @arg: is the argument to be printed
 * Return: void
 */
void print_char(va_list arg)
{
	char s;

	s = va_arg(arg, int);
	printf("%c", s);
}

/**
 * print_int - prints integers
 * @arg: is the argument to be printed
 * Return: void
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints floats
 * @arg: is the argument to be printed
 * Return: void
 */
void print_float(va_list arg)
{
	float numbs;

	numbs = va_arg(arg, double);
	printf("%f", numbs);
}

/**
 * print_string - print a string
 * @arg: is the argument to be passed in
 * Return: void
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - is function that prints anything
 * @format: is a format specifier
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x, i;
	va_list arg;
	char *separator;
	printer put[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	 };
	separator = "";
	x = 0;
	i = 0;
	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(arg, format);
	while (format[i] != '\0')
	{
		x = 0;
		while (put[x].type != NULL)
		{
			if (format[i] == (*put[x].type))
			{
				printf("%s", separator);
				put[x].func(arg);
				separator = ", ";
				break;
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
