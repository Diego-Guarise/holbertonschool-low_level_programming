#include "holberton.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
