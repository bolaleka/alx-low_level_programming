#include "main.h"

/**
 * _isupper - Function checks for uppercase character
 * @c: input character to check for
 *
 * Return: integer(1 or  0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
