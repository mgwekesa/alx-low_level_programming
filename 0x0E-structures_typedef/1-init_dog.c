#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initialized a variable of type struct dog
  * @d: initialize the struct
  * @name: the dog's name
  * @age: the age of the dog
  * @owner: the owner of the dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
