#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: the name given
  * @f: the function defining how to print name
  */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
