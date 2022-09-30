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
	int mul;

	mul = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (0);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
