#include "main.h"

/*
 * a palindrome is a string that read the same backward as forward
 * an empty string is a palindrome
 */

/* We first find the length of the string */

/**
 * str_len - finds the length of the string given
 * @s: the string
 * Return: the length of the string
 */

int str_len(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += str_len(s + 1);
	}

	return (len);
}

/* we then checks whether the given string is a palindrome */

/**
 * palindrome - checks to find out whether given string is a palindrome
 * @s: the given string
 * @len: the length of the string s
 * @i: the index
 * Return: returns 1 if string palindrome, 0 otherwise
 */

int palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palindrome(s, len, i + 1));
	return (0);
}

/**
 *  is_palindrome - checks if a string is a palindrome
 * @s: the string
 *  Return: returns 1 if the string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = str_len(s);

	if (!(*s))
		return (1);
	return (palindrome(s, len, i));
}
