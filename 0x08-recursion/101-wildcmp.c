#include "main.h"

/**
 * len_with_no_wilds - checks the length of a string, ignoring wildcards
 * @s: the string
 * Return: return the length
 */

int len_with_no_wilds(char *s)
{
	int len = 0;
	int i = 0;

	if (*s)
	{
		if (*s != '*')
			len++;
		i++;
		len += len_with_no_wilds(s + i);
	}

	return (len);
}

/**
 * loc_wild - locates a wildcard in a string
 * @s: the string
 */

void loc_wild(char **s)
{
	if (**s == '*')
	{
		(*s)++;
		loc_wild(s);
	}
}

/**
 * postfix_match - checks if a string matches the postfix of another string
 *                 that may contain wildcards
 * @s: the string
 * @postfix: the postfix
 * Return: if s and postfix identical, pointer to a null byte
 *         else, pointer to the first unmatched character in postfix
 */

char *postfix_match(char *s, char *postfix)
{
	int s_len = len_with_no_wilds(s) - 1;
	int p_len = len_with_no_wilds(postfix) - 1;

	if (*postfix == '*')
		loc_wild(&postfix);

	if (*(s + s_len - p_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(s, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - compares two strings with special char '*' replacing any string
 * @s1: the first string
 * @s2: the second string
 * Return: returns 1 if strings can be considered identical,
 *         otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		loc_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
