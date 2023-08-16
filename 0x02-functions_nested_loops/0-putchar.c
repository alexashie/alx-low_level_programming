#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints _putchar followed by new line'
 * Return: Always 0 (Success)
 */

int	main(void)
{
	write(1, "_putchar", 8);
	write(1, "\n", 1);
	return(0);
}
