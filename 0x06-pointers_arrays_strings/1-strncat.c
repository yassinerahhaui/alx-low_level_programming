#include "main.h"

/**
  * _strncat - that concatenates two strings
  * @dest: first string to concatenates
  * @src: second string to concatenates
  * @n: number of character to add a first string
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		if (j < n)
			dest[i] = src[j];
		else
			break;
		i++;
		j++;
	}
	return (dest);
}
