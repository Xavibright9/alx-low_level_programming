#include <stdio.h>

/**
 * main - prints the alphabets in a reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'z'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
