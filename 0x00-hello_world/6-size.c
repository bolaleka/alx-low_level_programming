#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charsize;
	int intsize;
	long int longintsize;
	long long longlongsize;
	float floatsize;

	printf("Size of a char: %zu byte(s)\n", sizeof(charsize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intsize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintsize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongsize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatsize));
	return (0);
}
