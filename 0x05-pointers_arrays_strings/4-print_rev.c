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
		i++;
	}
	
	int j = i - 1;
	while (s[j] >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
