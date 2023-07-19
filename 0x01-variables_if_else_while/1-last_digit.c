#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * Return: Always 1
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",
				n, last_digit);
	}
	printf("\n");
	return (0);
}
