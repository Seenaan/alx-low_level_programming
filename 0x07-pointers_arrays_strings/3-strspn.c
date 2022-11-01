#include "main.h"

/**
 * _strspn - returnes number of bytes in the initial segment
 * @s: string where substring look
 * @accept: substring
 * Return: length of occerance
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
