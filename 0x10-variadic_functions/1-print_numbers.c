#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: first param
 * @n: paramete length
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i, res;

	if (n == 0 && separator == NULL)
		return;
	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(param, int);
		printf("%d", res);
		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(param);
}
