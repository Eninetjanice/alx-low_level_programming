#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 *
 * Return: pointer to a newly allocated space in memory or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL) /*verify malloc doesn't fail*/
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}

	a[j] = '\0';
	return (a);
}
