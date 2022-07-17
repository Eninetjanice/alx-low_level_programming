#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 * @c: int value
 * Return: 1 if c is letter, otherwise 0.
 */
int _isalpha(int c)
{
	char lower;
	char upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				_putchar(isletter = 1);
		}
	}
	return (isletter);
}
