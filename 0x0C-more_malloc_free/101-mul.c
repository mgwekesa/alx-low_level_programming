#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int s_len(char *str);
char *create_array(int n);
char *iterate_zero(char *str);
int get_digit(char c);
void product(char *prod, char *mult, int digit, int zero);
void add_num(char *f_prod, char *n_prod, int n_len);

/**
  * s_len - identifies the string length
  * @str: the string
  * Return: the string length
  */

int s_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
  * create_array - creates an array of chars, initialized with 'x'
  *                terminated with NULL
  * @n: size of the array to be initialized
  * Return: a pointer to the array,
  *         if memory is insufficient, exits with a status of 98
  */

char *create_array(int n)
{
	char *array;
	int i = 0;

	array = malloc(sizeof(char) * n);

	if (array == NULL)
		exit(98);

	while (i < (n - 1))
	{
		array[i] = 'x';
		i++;
	}
	array[i] = '\0';

	return (array);
}

/**
  * iterate_zero - iterates the string with leading zeros until a
  *                non-zero number
  * @str: the string to be iterated
  * Return: the pointer to the non-zero element
  */

char *iterate_zero(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}


/**
  * get_digit - converts a character into an integer
  * @c: the character to be converted
  * Return: returns the converted int
  *         if C is a non-digit, exit with a status of 98
  */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
  * product - multiplies a string of numbers by a single digit
  * @prod: the buffer for storing the product
  * @mult: the string of numbers
  * @digit: a single digit
  * @zero: the number of leading zeroes
  * if string contais a nun-digit, exits with a status of 98
  */

void product(char *prod, char *mult, int digit, int zero)
{
	int m_len;
	int n;
	int tens = 0;

	m_len = s_len(mult) - 1;
	mult += m_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zero--)
	{
		*prod = '0';
		prod--;
	}

	for (; m_len >= 0; m_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		n = (*mult - '0') * digit;
		n += tens;
		*prod = (n % 10) + '0';
		tens = n / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}

/**
  * add_num - adds the numbers stored in two strings
  * @f_prod: the buffer storing the running final product
  * @n_prod: buffer storing the next product to be added
  * @n_len: the length of next prod
  */

void add_num(char *f_prod, char *n_prod, int n_len)
{
	int n;
	int tens = 0;

	while (*(f_prod + 1))
		f_prod++;

	while (*(n_prod + 1))
		n_prod++;

	for (; *f_prod != 'x'; f_prod--)
	{
		n = (*f_prod - '0') + (*n_prod - '0');
		n += tens;
		*f_prod = (n % 10) + '0';
		tens = n / 10;

		n_prod--;
		n_len--;
	}

	for (; n_len >= 0 && *n_prod != 'x'; n_len--)
	{
		n = (*n_prod - '0');
		n += tens;
		*f_prod = (n % 10) + '0';
		tens = n / 10;

		f_prod--;
		n_prod--;
	}

	if (tens)
		*f_prod = (tens % 10) + '0';
}
/**
  * main - Entry point for checking the code
  * @argc: the number of arguments
  * @argv: the arguments
  * Return: returns 0
  */

int main(int argc, char **argv)
{
	char *f_prod;
	char *n_prod;
	int size;
	int i;
	int digit;
	int zero = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = s_len(argv[1]) + s_len(argv[2]);
	f_prod = create_array(size + 1);
	n_prod = create_array(size + 1);
	i = s_len(argv[2]) - 1;
	for (; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		product(n_prod, argv[1], digit, zero++);
		add_num(f_prod, n_prod, size - 1);
	}
	for (i = 0; (f_prod[i]); i++)
	{
		if (f_prod[i] != 'x')
			_putchar(f_prod[i]);
	}
	_putchar('\n');
	free(n_prod);
	free(f_prod);
	return (0);
}
