#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	/* allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* allocate memory and copy the name string */
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	new_name = malloc(sizeof(char) * (name_len + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		new_name[name_len] = name[name_len];
	new_name[name_len] = '\0';

	/* allocate memory and copy the owner string */
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;
	new_owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		new_owner[owner_len] = owner[owner_len];
	new_owner[owner_len] = '\0';

	/* initialize the new dog's attributes */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
