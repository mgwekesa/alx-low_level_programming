/*
* prints exactly 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
* followed by a new line, to the standard error
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
* main - Entry point of a program
*
* Return: Returns 1
*/

int main(void)
{
	write(2,
	      "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
