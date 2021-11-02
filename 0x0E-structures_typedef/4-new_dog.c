#include <stdio.h>
#include "dog.h"

/**
 * new_dog - createds a new dog
 * @new_dog: pointer to stored data for struct dog
 * Return: d pointer
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