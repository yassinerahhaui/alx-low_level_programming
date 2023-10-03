#include "main.h"
#include <stdio.h>

/**
  * print_array - prints elements of an array of integers
  * @a: array of numbers
  * @n: number of elements to print
  * Return: nothing
  */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		if (b != 0)
		{
			printf(", ");
		}
		printf("%d", a[b]);
		b++;
	}
	printf("\n");
}
