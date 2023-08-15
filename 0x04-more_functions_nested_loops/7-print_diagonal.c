#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of line
  * return: nothing
  */

void print_diagonal(int n)
{
	int i = 1, j;

	if (n > 0)
	{
		while (i <= n)
		{
			j = 1;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
