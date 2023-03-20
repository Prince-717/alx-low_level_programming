#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure with the name dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: User defined data type for describing dogs.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
