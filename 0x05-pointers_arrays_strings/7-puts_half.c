#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to print
  * Return: nothing
  */

void puts_half(char *str)
{
	int n, b, c;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	c = n - 1;
	if (c % 2 == 0)
	{
		b = (n / 2) - 1;
	}
	else 
	{
		b = ((n - 1) / 2) - 1;
	}
	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
