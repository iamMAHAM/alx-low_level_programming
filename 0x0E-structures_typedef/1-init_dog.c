#include "dog.h"
/**
 * init_dog - init the dog
 * @d: the struct
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}