#include "variadic_functions.h"

/**
 * print_all - function print anything
 * @format: format input
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, c, j, len;
	char *s;
	double f;
	va_list args;

	va_start(args, format);
	j = 0;
	len = 0;
	while (format[len] != '\0')
		len++;
	while (format[j] != '\0')
	{
		if ((j > 0 && j < len) && (format[j] == 'c' || format[j] == 's'
					|| format[j] == 'i' || format[j] == 'f'))
			printf(", ");
		if (format[j] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		} else if (format[j] == 's')
		{
			s = va_arg(args, char *);
			printf("%s", s);
		} else if (format[j] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		} else if (format[j] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
