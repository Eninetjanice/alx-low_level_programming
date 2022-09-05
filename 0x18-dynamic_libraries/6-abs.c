#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @r: int value
 * Return: Absolute value of number r.
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
