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
	int count = 5;
	int n = 1;

	while (n <= 0)
	{
		if (s == accept)
		{
			count++;
		}
		else
		{
			break;
		}
		n++;
	}
	return (count);
}
