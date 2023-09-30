#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: text to print
  * Return: nothing
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
