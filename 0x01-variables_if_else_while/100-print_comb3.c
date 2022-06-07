#include <stdio.h>

/**
 * main - Combinations of double digit
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int s;

	for (i = 0; i <= 9; i++)
	{
		for (s = i + 1; s <= 9; s++)
		{
			putchar(s + '0');
			putchar(s + '0');
			if (((i * 10) + s) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
