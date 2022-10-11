#include "dog.h"
#include "./9-strcpy.c"

/**
 * new_dog - function create new dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = (dog_t *)malloc(sizeof(*my_dog));

	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;
	return my_dog;
}
