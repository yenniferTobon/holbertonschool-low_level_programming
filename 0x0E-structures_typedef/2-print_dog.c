#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - initialize a variable of type struct dog
 * @d: pointer d
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: ");

	if (!d->name)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");

	printf("%f\n", d->age);

	printf("Owner: ");

	if (!d->owner)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}

