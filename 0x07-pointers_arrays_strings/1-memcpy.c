#include "main.h"

/**
 * _memcpy - copies n bytes from memories
 * @n: size
 * @src: pointer to char
 * @dest: return pointer to char
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
