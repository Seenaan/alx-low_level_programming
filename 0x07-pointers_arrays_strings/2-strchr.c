#include "main.h"

/**
 * _strchr - returns pointer in the first occurance
 * @s: pointer to char
 * @c: occurance of char
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
