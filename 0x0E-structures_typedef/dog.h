#ifndef _DOG_
#define _DOG_

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

/* function that initializes structure */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* #ifndef _DOG_ */

