#include <stdlib.h>
#include <stdio.h>
#ifndef _DOG_
#define _DOG_

/**
 * dog_struct - typedef of struct dog
 */

typedef struct dog dog_struct;

/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* #ifndef _DOG_ */

