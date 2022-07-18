#include <stdio.h>

/**
 * main - prints its name followed by \n
 * @argc: argument count
 * @argv: argument value containing string pointer to arrays of arguments
 * Return: returns 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
