#include"main.h"

/**
 * main - Entry point
 * 
 * _islower: 'function to check if
 *           character is lowercase'
 * @c: integer c to be assessed
 * 
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
