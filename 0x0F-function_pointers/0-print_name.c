#include "function_pointers.h"

/**
 * print_name - funtion print name with call back function
 * @name: input name
 * @f: call back funtion
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
