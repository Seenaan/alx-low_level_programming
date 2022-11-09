#include "main.h"

/**
 * _isalpha - chechs for alphabetic char
 * @c: the char to be cheacked
 * Return: 1 if c is a letter, lower case or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
