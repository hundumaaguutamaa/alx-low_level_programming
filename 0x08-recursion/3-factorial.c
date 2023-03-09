#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @r: input number.
 * Return: Factorial of the number.
 */
int factorial(int r)
{
	if (r < 0)
		return (-1);
	else if (r == 0)
		return (1);
	else
		return (r * factorial(r - 1));
}

