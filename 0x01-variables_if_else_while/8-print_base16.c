#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
