#include <stdio.h>

/**
  * main - Entry point
  * Description: prints the numbers from 1 to 100
  * Return: 0
  */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
