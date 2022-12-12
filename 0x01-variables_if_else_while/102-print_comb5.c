#include <stdio.h>
/**
 * main - main block
 * Description:
 * prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b1;
	int b2;

	int a2;
	int c1;
	int c2;

	while (a <= 98)
	{
		b1 = (a / 10 + '0');
		b2 = (a % 10 + '0');
		a2 = 0;

		while (a2 <= 99)
		{
			c1 = (a2 / 10 + '0');
			c2 = (a2 % 10 + '0');

			if (a < a2)
			{
			putchar(b1);
			putchar(b2);
			putchar(' ');
			putchar(c1);
			putchar(c2);

				if (a != 98)
				{
				putchar(',');
				putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
