#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: number to swap
  * @b: number to swap
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int aa = *a;

	*a = *b;
	*b = aa;
}
