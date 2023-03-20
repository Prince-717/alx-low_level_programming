#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

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
