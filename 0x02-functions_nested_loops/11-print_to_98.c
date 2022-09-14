#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: the end point
 *
 *Return: 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	} else
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
