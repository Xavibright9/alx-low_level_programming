#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets in a reverse
 * Remain: Always 0 (Success)
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
