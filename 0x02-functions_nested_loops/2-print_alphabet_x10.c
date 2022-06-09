#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets x10
 * Description: uses _putchar to print 10 times the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
