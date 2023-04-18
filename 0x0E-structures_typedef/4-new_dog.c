#include "dog.h"
#include <stdlib.h>
/**
 * _cpystrn - copy a string
 * @dest: string
 * @src: string
 * Return: the copy
 */
char *_cpystrn(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[j] = '\0';

return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: attribute
 * @age: attribute
 * @owner: attribute
 * Return: the copied struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i = 0, j = 0;

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
	{
		j++;
	}

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	(*newdog).name = malloc(sizeof(char) * (i + 1));
	if ((*newdog).name == NULL)
	{
		free (newdog);
		return (NULL);
	}

	(*newdog).owner = malloc(sizeof(char) * (j + 1));
	if ((*newdog).owner == NULL)
	{
		free(newdog);
		free((*newdog).name);
		return (NULL);
	}
	_cpystrn((*newdog).name, name);
	_cpystrn((*newdog).owner, owner);
	(*newdog).age = age;

return (newdog);
}
