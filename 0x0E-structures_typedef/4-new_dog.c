#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - A function that returnrethe length of a string
 * @s: string to be returned.
 *
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strcpy - A function that copies the string pointed to by src including the
 * terminating null bnull bbytnull bytbyte ('\0')
 * to the buffer pointed to dest.
 * @dest: pointer to the buffer in which the string is copied.
 * @src: pointer to the string to be copied.
 *
 * Return: return the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int lgth, x;

	lgth = 0;

	while (src[lgth] != '\0')
	{
		lgth++;
	}
	for (x = 0; x < lgth; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new dog
 * @name: pointer to the name of the new dog
 * @age: the age of the new dog
 * @owner: pointer to the owner of the new dog
 *
 * Return: return pointer to the new dog on success, otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lgth1, lgth2;

	lgth1 = _strlen(name);
	lgth2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lgth1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lgth2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
