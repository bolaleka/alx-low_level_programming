#include "main.h"

/**
 * main -  Entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
