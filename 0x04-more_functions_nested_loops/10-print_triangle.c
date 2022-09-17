#include "main.h"

/**
 * print_triangle - funtion print triangle with a new line
 * @size: size of the triangle
 *
 * Return: integer
 */
void print_triangle(int size)
{
	int i,j,k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= size; i++)
		{
			j = 1;
			for  (; j <= size - i; j++)
			{
				_putchar(' ');
			}
			k = 1;
			for (; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
