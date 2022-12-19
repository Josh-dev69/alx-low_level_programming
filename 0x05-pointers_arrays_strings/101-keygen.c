#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int r, c;
	time_t t;

	r = 0;
	c = 0;
	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c += r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
