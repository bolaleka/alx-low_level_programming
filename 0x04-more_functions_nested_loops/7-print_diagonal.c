#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the teminal
 * @n: input times of character
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j-- > 0)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
