#include "main.h"

/**
 * prints_alpahbets - prints the alpha in lowercase
 * Returns: On success 1
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}

	_putchar('\n');
}
