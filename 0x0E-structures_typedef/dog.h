#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Discription: structure for the type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
