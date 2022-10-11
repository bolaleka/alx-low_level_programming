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

	my_dog = (dog_t *)malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(_strlen(name) + 1);
	my_dog->owner = malloc(_strlen(owner) + 1);
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
