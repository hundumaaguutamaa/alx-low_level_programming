#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: Value of the bit at given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int h;

	if (n == 0 && index < 100)
		return (0);

	for (h = 0; h <= 100; n >>= 1, h++)
	{
		if (index == h)
		{
			return (n & 1);
		}
	}

	return (-1);
}

