#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: the dog type struct
 * @name: the first attribute in d
 * @age: the second attribute in d
 * @owner: the third attribute in d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = puppy;
	(*d).age = month;
	(*d).owner = man;
}
