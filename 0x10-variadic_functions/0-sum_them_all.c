#include "variadic_functions.h"

/**
 * sum_them_all - function return the sum of all parameters
 * @n: constant intger
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, s;

	va_start(sum, n);
	s = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		s += va_arg(sum, int);
	va_end(sum);
	return (s);
}
