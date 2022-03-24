#include "main.h"
#include <stdio.h>

/**
 * main - Entr point to check code
 * Return: returns 0
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! Hello-world 0123456hello world\tHello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return(0);
}
