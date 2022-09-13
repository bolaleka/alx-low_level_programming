#include "1-alphabet.c"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Null
 */
void print_alphabet_x10(void)
{
	char count;

	count = '0';
	while (count <= '9')
	{
		print_alphabet();
		count++;
	}
}
