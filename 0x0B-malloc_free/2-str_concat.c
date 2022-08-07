#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function to find the length of a string.
 * @s: pointer to string of char type
 *
 * Return: length of given string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strlen - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns a ptr containing contents of s1,s2 & '\0' or NULL on faliure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, totallen;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	totallen = (len1 + len2) + 1;
	arr = malloc(totallen * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			arr[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			arr[i] = s2[j];
			i++;
		}
		arr[i + 1] = '\0';
		return (arr);
	}
}
