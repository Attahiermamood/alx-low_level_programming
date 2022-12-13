#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: prints + if n is greater than zero
 * prints 0 if n is zero
 * and prints - if n is less than zero
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
