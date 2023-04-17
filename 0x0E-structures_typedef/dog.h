#include <stdlib.h>
#include "main.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to dog variable name
 * @age: pointer to dog variable age
 * @owner: pointer to dog variable owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

