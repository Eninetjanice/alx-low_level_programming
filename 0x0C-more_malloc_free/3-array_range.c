#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @max: maximum integer value
 * @min: minimum integer value
 * Return: pointer to the newly created array; NULL if min > max & if malloc =F
 **/

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	/*Reserve memory space using malloc*/
	arr = malloc((max - min + 1) * sizeof(int));

	/*Verify that malloc did not fail*/
	if (arr == NULL)
	{
		return (NULL);
	}

	/*Generate array of int from min(included) to max(included)*/
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
