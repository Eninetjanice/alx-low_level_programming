#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointer, initial segment
 * @accept: string pointer, accepted byte
 *
 * Return: returns number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		n = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n = 0;
				break;
			}
		}
		if (n == 1)
			break;
	}
	return (i);
}
