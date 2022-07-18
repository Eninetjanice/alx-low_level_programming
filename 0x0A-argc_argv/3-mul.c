#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two integers
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: result of the multiplication or error followed by \n.
 */

int main(int argc, char *argv[])
{
	int i, b, c, sum;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		b = atoi(argv[1]);
		c = atoi(argv[2]);
	}
	sum = b * c;
	printf("%d\n", sum);
	return (0);
}
