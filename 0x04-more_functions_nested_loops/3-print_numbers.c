#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints 0 - 9.
 *
 *Return: void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}

