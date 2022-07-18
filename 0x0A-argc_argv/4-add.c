#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * numchecker - verifies if string has only numbers
 * @j: string to check
 *
 * Return: 1 if only numbers, 0 if not
 */

int numchecker(char *j)
{
	int i;
	
	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] < '0' || j[i] > '9')
			return (0);
	}
	return (1);
}


/**
 * main - adds positive numbers.
 * @argc: arguments counter.
 * @argv: pointer to array of arguments
 * Return: zero
 */

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (numchecker(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
