#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: Value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 100)
		return (0);

	for (a = 0; a <= 99; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}

