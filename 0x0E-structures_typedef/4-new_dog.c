#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that return the length of a string
 * @s: string to return
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
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null bytes
 * @dest: pointer to the buffer in which we copy the string
 * @src: pointer to the string copied
 *
 * Return: return the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: pointer to the name of the new dog
 * @age: the age of the new dog
 * @owner: owner of the  new dog
 *
 * Return: return pointer to the new dog on success, otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
