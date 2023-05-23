#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: String lenght to be measured.
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies string pointed to by src.
 * @dest: Buffer storing the string copies.
 * @src: Source string.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Goldie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	Goldie = malloc(sizeof(dog_t));
	if (Goldie == NULL)
		return (NULL);

	Goldie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (Goldie->name == NULL)
	{
		free(Goldie);
		return (NULL);
	}

	Goldie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (Goldie->owner == NULL)
	{
		free(Goldie->name);
		free(Goldie);
		return (NULL);
	}

	Goldie->name = _strcopy(Goldie->name, name);
	Goldie->age = age;
	Goldie->owner = _strcopy(Goldie->owner, owner);

	return (Goldie);
}
