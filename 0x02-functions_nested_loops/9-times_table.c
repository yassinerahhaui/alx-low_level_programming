#include "main.h"

/**
  * times_table - Entry point
  * Description: prints the 9 times table, starting with 0
  * Return: nothing
  */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 1;

		int b = i;

		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(',');
		while (j < 9)
		{
			b = b + i;
			_putchar(' ');
			if (b < 10)
			{
				_putchar(' ');
				_putchar(b + '0');
			}
			else
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			if (j != 8)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
