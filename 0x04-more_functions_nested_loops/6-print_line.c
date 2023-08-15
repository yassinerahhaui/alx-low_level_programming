#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: number for straight line length
  * Return: nothing
  */

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
