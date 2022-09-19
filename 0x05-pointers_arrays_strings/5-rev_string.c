#include "main.h"
#include "./2-strlen.c"
#include  "./_putchar.c"

/**
 * rev_string - String reverse
 * @s: String input
 * 
 * Return: void
 */
void rev_string(char *s)
{
	int len;

	len = _strlen(s);
	for (; len > 0; len--)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
