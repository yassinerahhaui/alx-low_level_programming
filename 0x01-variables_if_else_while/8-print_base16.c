#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * Return: Always 1
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
