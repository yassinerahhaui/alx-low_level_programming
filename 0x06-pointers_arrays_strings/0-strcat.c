#include "main.h"

/**
  * _strcat - that concatenates two strings
  * @dest: first string to concatenates
  * @src: second string to concatenates
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
