#include "main.h"
#include <stdlib.h>

/**
  * word_len - locates the index marking the end of the first word
  *            in a string
  * @str: the string
  * Return: index marking the end of the first word by str
  */

int word_len(char *str)
{
	int i = 0;
	int len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
  * word_count - counts the number of words contained in a string
  * @str: the string
  * Return: returns the number of words in a string
  */

int word_count(char *str)
{
	int i;
	int w_count = 0;
	int len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			w_count++;
			i += word_len(str + i);
		}
	}
	return (w_count);
}

/**
  * strtow - splits a string into words
  * @str: the string to be split
  * Return: returns a pointer to an array of strings (words)
  *         each element contains a single word, null terminated
  *         the last element of the returned array should be NULL
  *         words separated by spaces
  *	    returns NULL if str == NULL or str = ""
  *         if function fails, return NULL
  */

char **strtow(char *str)
{
	char **string;
	int i = 0;
	int w_count;
	int w;
	int letters;
	int l;

	if (str == NULL || str[0] == '\0')
		return ('\0');

	w_count = word_count(str);
	if (w_count == 0)
		return ('\0');

	string = malloc(sizeof(char *) * (w_count + 1));
	if (string == NULL)
		return ('\0');

	for (w = 0; w < w_count; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);
		string[w] = malloc(sizeof(char) * (letters + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);

			free(string);
			return ('\0');
		}

		for (l = 0; l < letters; l++)
			string[w][l] = str[i++];

		string[w][l] = '\0';
	}

	string[w] = '\0';

	return (string);
}
