#include"main.h"

/**
 * main - Entry point
 * 
 * print_alphabet: 'print_alphabet'
 * @void: no parameter
 * 
 * Return:nothing
 */


void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
