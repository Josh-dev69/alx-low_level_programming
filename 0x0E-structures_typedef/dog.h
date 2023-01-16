#ifndef DOG_H
#define DOG_H

/**
 * dog - tag name the structure
 * @name: name member of the structure
 * @age: age member of the structure
 * @owner: Owner member of the structure
 */

struct dog
{
	char* name;
	float age;
	char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
