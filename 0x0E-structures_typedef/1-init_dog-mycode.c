include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 *
 * @d: Pointer that points to struct dog.
 * @name: Pointer that points to character.
 * @age: Age parameter.
 * @owner: Pointer that points to characters.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int ln = 0;
	int lo = 0;
	int i;
	int j;

	while (name[ln] != '\0')
	{
		ln++;
	}
	ln++;

	while (owner[lo] != '\0')
	{
		lo++;
	}
	lo++;

	d->name = (char*) malloc(sizeof(char) * ln);
	d->owner = (char*) malloc(sizeof(char) * lo);

	if (d->name == NULL)
		return (NULL);

	if (d->owner == NULL)
		return (NULL);

	for (i = 0; i < ln; i++)
		d->name[i] = name[i];
	for (j = 0; j < lo; j++)
		d->owner[j] = owner[j];

	d->age = age;
}
