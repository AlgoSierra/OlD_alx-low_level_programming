#include "main.h"

/**
 * _isupper - function that checks for upeercase character
 *
 * @c: int that's checked if it is uppercase
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
