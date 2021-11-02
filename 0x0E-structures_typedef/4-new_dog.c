#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - createds a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pupper;

	pupper = malloc(sizeof(dog_t));
	if (pupper == NULL)
		return (NULL);

	pupper->name = name;
	pupper->age = age;
	pupper->owner = owner;
	return (pupper);
}

