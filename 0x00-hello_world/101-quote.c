#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    	write(STDERR_FILENO, message, strlen(message));
	return (0);
}
