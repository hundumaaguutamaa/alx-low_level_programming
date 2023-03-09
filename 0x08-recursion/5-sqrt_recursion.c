#include "main.h"

/**
 * sqrt_recursion: Returns the natural square root of a number
 *
 * @n: input number
 * @r: iterator
 * Return: square root or -1.
 */
int power_operation(int n, int r)
{
	if (r % (n / r) == 0)
	{
		if (r * (n / r) == n)
			return (r);
		else
			return (-1);
	}
	return (0 + power_operation(n, r + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}

