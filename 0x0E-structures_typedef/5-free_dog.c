#include "dog.h"


/**
 * free_dog - function that free dog
 * @d: input struct data
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
