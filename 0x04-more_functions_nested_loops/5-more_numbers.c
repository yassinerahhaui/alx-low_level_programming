#include "main.h"
#include <stdio.h>

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
  * Description: use _putchar only three times
  * Return: nothing
  */

void more_numbers(void)
{
	int i = 1, n;

	while (i <= 10)
	{
		n = 0;
		while (n <= 14)
		{
			char a[10];

			int m = 0;

			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				sprintf(a, "%d", n);
				while (m <= 1)
				{
					_putchar(a[m]);
					m++;
				}
			}
			n++;
		}
		_putchar('\n');
		i++;
	}
}
