#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * Return: Always 1
 */
int main(void)
{
	const char *message =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);

	write(STDERR_FILENO, message, len);
	return (1);
}

