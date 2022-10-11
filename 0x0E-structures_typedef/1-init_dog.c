#include "dog.h"

/**
 * init_dog - function initialize a variable of type struct dog
 * @d: sub struct member
 * @name: member name
 * @age: struct age
 * @owner: owner member
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
