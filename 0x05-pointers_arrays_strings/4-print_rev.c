#include "main.h"
#include "./2-strlen.c"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: input string character
 *
 * Retturn: void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	for (; len >= 0; len--)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
