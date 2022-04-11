#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - creates a new dog
  * @name: name of the new dog
  * @age: the age of the new dog
  * @owner: owner of the new dog
  * Return: pointer to the created dog structure
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *cpyname;
	char *cpyowner;
	int len_n = 0;
	int len_o = 0;
	int i;

	if (name == NULL || owner == NULL)
		return ('\0');

	while (name[len_n])
		len_n++;
	while (owner[len_o])
		len_o++;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return ('\0');

	cpyname = malloc(len_n + 1);
	cpyowner = malloc(len_o + 1);
	if (cpyname == NULL || cpyowner == NULL)
		return ('\0');

	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_d->name = cpyname;
	new_d->age = age;
	new_d->owner = cpyowner;

	return (new_d);
}
