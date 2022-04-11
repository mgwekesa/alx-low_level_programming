#include <stdlib.h>
#include "dog.h"

/** new_dog: creates a new dog
  * @name: name of the new dog
  * @age: the age of the new dog
  * @owner: owner of the new dog
  * Return: pointer to the created dog structure
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	if (name == NULL || owner == NULL)
		return ('\0');

}
