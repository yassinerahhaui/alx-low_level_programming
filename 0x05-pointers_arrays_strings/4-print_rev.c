#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: text to print
  * Return: nothing
  */

void print_rev(char *s)
{
	int i, j, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
