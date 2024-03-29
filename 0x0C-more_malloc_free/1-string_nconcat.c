#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concanate to s1
 * Return: returns a ptr containing contents of s1,s2 & '\0' or NULL on faliure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/*Get length of s1*/
	while (s1 && s1[len1])
		len1++;
	/*Get length of s2*/
	while (s2 && s2[len2])
		len2++;

	/*Reserve memory space using malloc*/
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	/*Verify that malloc did not fail*/
	if (s == NULL)
		return (NULL);

	/*Transfer all bytes from s1 to new buffer s*/
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	/*Transfer n bytes from s2 to remaining spaces of new buffer s*/
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	/*Append terminating null byte at end*/
	s[i] = '\0';
	return (s);
}
