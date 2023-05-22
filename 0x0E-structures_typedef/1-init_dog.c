#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d: pointer to the dog structure
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
