#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string pointer to be scanned
 * @accept: string pointer, containing byte to be matched
 *
 * Return: returns pointer to byte in s hat matches one of the bytes in accept
 * else returns '\0'
 */
char *_strpbrk(char *s, char *accept)
{
	char f, t;

	for (f = 0; *(s + f) != '\0'; f++)
	{
		for (t = 0; *(accept + t) != '\0'; t++)
		{
			if (*(s + f) == *(accept + t))
				return (s + f);
		}
	}
	return ('\0');
}
