#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, show
 * Return: 1 for lowercase character else 0. 
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
