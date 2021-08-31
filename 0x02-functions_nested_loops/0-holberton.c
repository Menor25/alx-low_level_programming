#include "main.h"

/**
 * main.h - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char house[] = "_putchar";
	int i = 0;

	while (house[i] != '\0')
	{
		_putchar(house[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
