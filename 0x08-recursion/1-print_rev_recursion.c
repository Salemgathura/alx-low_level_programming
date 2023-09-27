#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function prints a given string in reverse
 * using recursive approach.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: if the string is not empty */
	if (*s)
	{
		/* Recursively call the function with the next character */
		_print_rev_recursion(s + 1);

		/* Print the current character */
		_putchar(*s);
	}
}
