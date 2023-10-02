#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to print
  * Return: nothing
  */

void puts_half(char *str)
{
	int n, b;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	b = n / 2;
	if (n % 2 != 0)
	{
		b -= 1;
	}
	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
