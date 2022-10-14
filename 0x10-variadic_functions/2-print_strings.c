#include "variadic_functions.h"

/**
 * print_strings - function that prints stringi
 * @separator: first param
 * @n: paramete length
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	char *res;

	va_start(param, n);

	if (n == 0 && separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		res = va_arg(param, char *);
		if (res == NULL)
			printf("(nil)");
		else
			printf("%s", res);
		if (i < (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(param);
}
