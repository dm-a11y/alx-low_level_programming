#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dogg;
	int x, dname, downer;

	n_dogg = malloc(sizeof(*n_dogg));

	if (n_dogg == NULL || !(name) || !(owner))
	{
		free(n_dogg);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	n_dogg->name = malloc(dname + 1);
	n_dogg->owner = malloc(downer + 1);

	if (!(n_dogg->name) || !(n_dogg->owner))
	{
		free(n_dogg->name);
		free(n_dogg->owner);
		free(n_dogg);
		return (NULL);
	}

	for (x = 0; x < dname; x++)
		n_dogg->name[x] = name[x];
	n_dogg->name[x] = '\0';

	n_dogg->age = age;

	for (x = 0; x < downer; x++)
		n_dogg->owner[x] = owner[x];
	n_dogg->owner[x] = '\0';

	return (n_dogg);
}
