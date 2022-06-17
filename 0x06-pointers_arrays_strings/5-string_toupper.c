#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: string to modify
 *
 * Return: the result
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 32;
	}
	return (s);
}
