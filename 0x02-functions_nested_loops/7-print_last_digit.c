#include "main.h"
/**
* print_last_digit - print last digit of a number
* @nbr: available number
*
* Return: nbr
*/
int print_last_digit(int nbr)
{
	int n;

	n = nbr % 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
