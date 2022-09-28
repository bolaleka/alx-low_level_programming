#include "main.h"

/**
 * _puts_recursion - Print a string recursively to standard output
 * @s: input string
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
