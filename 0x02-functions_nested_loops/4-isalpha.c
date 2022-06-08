#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *@c: The int to print
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
