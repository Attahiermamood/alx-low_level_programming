#include "main.h"
/**
 * print_square - check for a digit
 ** @n : number of _ to be printed
 ** Return:void
 **/
void print_square(int n)
{
	int size = 0, ii;

	while (size < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			size++;
		}
		_putchar('\n');
		size++;
	}
	if (size <= 0)
		_putchar('\n');
}
