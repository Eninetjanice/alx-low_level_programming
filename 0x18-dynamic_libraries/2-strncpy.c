#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string pointer
 * @src: source pointer string
 * @n: number of bytes to copy
 * Return: Returns the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
