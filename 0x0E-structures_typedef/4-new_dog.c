#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - dog
 * @name: dog
 * @age: dog
 * @owner: dog
 * Return: dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
	{
		return (NULL);
	}
	n = o = 0;
	while (name[n++])
		;
	while (owner[o++])
		;
	d1->name = malloc(n * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	i = 0;
	while (i <= n)
	{
		i++;
		d1->name[i] = name[i];
	}
	d1->age = age;
	d1->owner = malloc(o * sizeof(d1->owner));
	if (d1->owner)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	i = 0;
	while (i <= o)
	{
		i++;
		d1->owner[i] = owner[i];
	}
	return (d1);
}
