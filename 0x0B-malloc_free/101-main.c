#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_tab - prints an array of string
  * @tab: the array to print
  */

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
  * main - check the code for ALX School students
  * Return: returns 1 if an error occured, 0 otherwise
  */

int main(void)
{
	char **tab;

	tab = strtow("           Holberton School           #cisfun       ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	print_tab(tab);
	return (0);
}
