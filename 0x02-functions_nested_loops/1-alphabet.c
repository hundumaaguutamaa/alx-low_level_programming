#include "main.h"

/**
 * main - execution starts here
 * print_alphabet - Prints alphabets in lowercase.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
