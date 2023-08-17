#include "main.h"

/**
  * print_triangle -  prints a triangle, followed by a new line
  * @size: triangle size
  * return: nothing
  */

void print_triangle(int size)
{
	int i = 1, j, n = size;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
				j++;
			}
			_putchar('\n');
			n--;
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
