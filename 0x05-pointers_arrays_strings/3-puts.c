#include "main.h"
/**
 * _puts - takes a string pointer as a parameter and adds a newline at the end
 * @str: this is the string point
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
