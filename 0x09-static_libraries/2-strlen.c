#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: variable of the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
