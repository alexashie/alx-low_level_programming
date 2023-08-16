#include"main.h"

 /**
 * main - Entry point
 * 
 * print_alphabet_x10: 'function that will print the alphabet 10 times'
 * @void: no parameter
 * 
 * Return:nothing
 */


void print_alphabet_x10(void)
{
	int line, c;

	for (line = 0; line <= 9; ++line)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
