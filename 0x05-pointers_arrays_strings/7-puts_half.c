#include "main.h"

/**
 * puts_half - prints second half of string followed by a new line
 *@str: pointer to string variable
 * Return: void
 */
void puts_half(char *str)
{
	int l, n, a;

	while (str[l] != '\0\')
		l++;
	n = l / 2;
	if (l % 2 ==0)
	{
		for (a = n-1; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
	
		}
	}
	else
	{
		n = (l - 1) / 2;
		for (a = n-1; str[a] != '\0'; a++)
		{
			__putchar(str[a]);
		}
	}
	_putchar('\n');
}
