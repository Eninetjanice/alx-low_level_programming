#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: string pointer pointer containing source adress.
 * @to: string pointer to target adress.
 *
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
