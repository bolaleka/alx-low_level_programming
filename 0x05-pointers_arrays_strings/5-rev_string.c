#include "main.h"
#include "./2-strlen.c"

/**
 * rev_string - String reverse
 * @s: String input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		len--;
	}
}
