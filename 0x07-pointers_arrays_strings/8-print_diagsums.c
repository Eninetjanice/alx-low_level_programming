#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integer
 * @b: input pointer.
 * @size: int variable, size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *b, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(b + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(b + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
