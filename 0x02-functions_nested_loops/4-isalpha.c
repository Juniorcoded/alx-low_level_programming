#include "holberton.h"
/**
 * _isalpha - check main
 * @c: An input character
 * Description: it returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lowercase, uppercase;
	int isletter = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; upper++)
		{
			if (c == lowercase || c == uppercase)
				letter = 1;
		}
	}
	return (letter);
}
