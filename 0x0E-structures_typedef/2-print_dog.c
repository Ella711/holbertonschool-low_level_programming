#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct
 * @d: pointer to stored data for struct dog
 * Return: d pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		d->name = NULL;
		printf("Name: %p\n", d->name);
	}
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
	{
		d->age = 0;
		printf("Age: %f\n", d->age);
	}
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = NULL;
		printf("Name: %p\n", d->owner);
	}
	else
		printf("Owner: %s\n", d->owner);
}

