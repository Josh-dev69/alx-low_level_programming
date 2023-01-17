#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: pointer to structure dog
 * @name: Member of the struct(character pointer for the name)
 * @age: Member of the struct(Float parameter)
 * @owner: Member of the struct(charcter pointer)
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
