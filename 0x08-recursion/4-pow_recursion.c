#include "main.h"

/**
 * _pow_recursion - function that returns the value of exponent
 * @x: base integer
 * @y: power integer
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return ((1 / (x * _pow_recursion(x, -y))));
	else
		return (1);
}
