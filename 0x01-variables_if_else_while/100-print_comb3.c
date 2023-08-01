#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * Return: Always 1
 */

int main(void)
{
	int a = 0;

	while (a <= 8)
	{
		int b = a + 1;

		while (b <= 9)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a == 8)
			{
				if (b == 9)
				{
					break;
				}
			}
			putchar(',');
			putchar(' ');
			b++;
		};
		a++;
	};
	putchar('\n');
	return (0);
}
