#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - Write a function that creates a new dog
 * @name: Name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pelu;
	int i = 0;

	pelu = malloc(sizeof(dog_t));
	if (pelu == NULL)
		return (NULL);

	while (*(name + i) != '\0')
		i++;

	pelu->name = malloc(i + 1);
	if (pelu->name == NULL)
	{
		free(pelu);
		return (NULL);
	}

	i = 0;
	while (*(owner + i) != '\0')
		i++;

	pelu->owner = malloc(i + 1);

	if (pelu->owner == NULL)
	{
		free(pelu->name);
		free(pelu);
		return (NULL);
	}

	i = 0;
	while (((pelu->name[i]) = name[i]))
		i++;
	i = 0;
	while ((pelu->owner[i] = owner[i]))
		i++;

	pelu->age = age;
	return (pelu);
}
