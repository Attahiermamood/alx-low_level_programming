#include <stdio.h>
/**
 * main - Entry block
 * Description: prints the lowercase alphabet in rev
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
