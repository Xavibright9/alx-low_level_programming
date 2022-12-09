#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in b oth lower and upper cases
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		purchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
