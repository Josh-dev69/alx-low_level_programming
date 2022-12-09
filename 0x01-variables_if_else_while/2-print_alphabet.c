#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
		putchar(alpha);
		putchar('\n');
		alpha++;
	return (0);
}
