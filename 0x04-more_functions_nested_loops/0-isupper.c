#include "main.h"

/**
 * _isupper - Check if a letter is upper case
 *@c: The number to be checked
 * Return: 1 for upper case letter or 0 for any else
 */
int _isupper(int c)
{
        char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
