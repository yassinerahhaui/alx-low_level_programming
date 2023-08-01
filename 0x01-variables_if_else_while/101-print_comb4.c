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

	while (a <= 7)
	{
		int b = a + 1;

		while (b <= 8)
		{
			int c = b + 1;

			while (c <= 9)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a == 7)
				{
					if (b == 8)
					{
						if (c == 9)
						{
							break;
						}
					}
				}
				putchar(',');
				putchar(' ');
				c++;
			};
			b++;
		};
		a++;
	};
	putchar('\n');
	return (0);
}


