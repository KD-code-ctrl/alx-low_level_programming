#include <stdio.h>

/**
 * main - prints numbers 1-100 if num is multiple of 3 prints fizz
 * if num is multiple of 5 print buzz if num num multiple of
 * both 5&3 prints fizzbuzz or else prints num
 * Return:0 if successful
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		putchar('\n');
		n++;
	}
	putchar('\n');
	return (0);
}
