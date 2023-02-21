#include <unistd.h>

/**
 * _putchar - writes charater c in stdout
 * c - character to print 
 * Return 1 - Success
 * Error - -1 returned 
 */

int _putchar(char c)
{
	return (write (1, &c, 1));

}
