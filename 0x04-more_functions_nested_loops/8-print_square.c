#include "main.h"

/**
  * print_square - prints a square, followed by a new line
  * @size: number of square
  * Return: nothing
  */

void print_square(int size)
{
	int i = 1, j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
