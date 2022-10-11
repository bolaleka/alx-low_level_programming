#include "./dog.h"



/**
 * print_dog - function print  a struct dog
 * @d: input struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = NULL;
		printf("%s\n", (char *)d);
	}
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
