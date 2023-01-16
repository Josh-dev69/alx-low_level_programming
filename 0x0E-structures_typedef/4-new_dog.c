#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Function that returns the length of a string
 * @s: String parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcopy - Function that copies string pointed to by src including
 * the terminating null byte (\0) to the buffer pointed to by dest.
 * @dest: pointer to the destination of the string
 * @src: pointer to the string source
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bulldog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	bulldog = malloc(sizeof(dog_t));
	if (bulldog == NULL)
		return (NULL);
	bulldog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bulldog->name == NULL)
	{
		free(bulldog);
		return (NULL);
	}
	bulldog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bulldog->owner == NULL)
	{
		free(bulldog->name);
		free(bulldog);
		return (NULL);
	}
	bulldog->name = _strcopy(bulldog->name, name);
	bulldog->age = age;
	bulldog->owner = _strcopy(bulldog->owner, owner);

	return (bulldog);
}
