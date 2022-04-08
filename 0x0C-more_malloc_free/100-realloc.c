#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: the pointer to the memory previously allocated with a call
  *       to malloc: malloc(old size)
  * @old_size: the size, in bytes, of the allocated space for ptr
  * @new_size: the new size, in bytes of the new memory block
  * the contents will be copied to the newly allocated space, in the
  * range from the start of ptr up to the minimum of the old and new sizes
  * if new_size > old_size, the "added" memory should not be initialized
  * if new_size == old_size, do not do anything and return ptr
  * if ptr is NULL, then the call is equivalent to malloc(new_size),
  * for all values of old_size and new_size
  * if new_size is equal to zero, and ptr is not NULL, then the call is
  * equivalent to free(ptr).
  * Return: NULL
  * Do not forget to free ptr when it makes sense
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc;
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return ('\0');
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_loc = malloc(new_size);
	new_ptr = ptr;

	if (old_size > new_size)
		old_size = new_size;

	while (i < old_size)
	{
		new_loc[i] = new_ptr[i];
		i++;
	}
	free(ptr);
	return (new_loc);
}
