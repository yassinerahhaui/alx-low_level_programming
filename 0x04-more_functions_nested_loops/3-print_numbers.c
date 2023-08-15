#include "main.h"

/**
  * print_numbers - Entry point
  * Description: prints the numbers, from 0 to 9
  * Return: nothing
  */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
