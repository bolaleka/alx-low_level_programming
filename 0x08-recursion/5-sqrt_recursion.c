#include "main.h"

/**
 * _sqrt_helper - helper function
 * @n: first param
 * @sqrt: second param
 *
 * Return: integer
 */
int _sqrt_helper(int sqrt, int n)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	else
		return (_sqrt_helper(sqrt + 1, n));
}

/**
 * _sqrt_recursion -  function that returns the natural square root
 * @n: input integer
 *
 * Return: ineger
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (_sqrt_helper(1, n));
}
