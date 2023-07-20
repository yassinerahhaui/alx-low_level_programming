#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * Return: Always 1
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}
