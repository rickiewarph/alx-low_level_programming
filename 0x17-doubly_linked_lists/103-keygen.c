#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - func to generate a key based
 * on a username for crackme5
 * @argc: no. of arguments passed
 * @argv: arguments passed to the main func
 * Return: 0(success) or 1(failure)
 */

int main(int argc, char *argv[])
{
	unsigned int q, d;
	size_t length, ad;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	p[0] = l[(length ^ 59) & 63];
	for (q = 0, ad = 0; q < length; q++)
		ad += argv[1][q];
	p[1] = l[(ad ^ 79) & 63];
	for (q = 0, d = 1; q < length; q++)
		d *= argv[1][q];
	p[2] = l[(d ^ 85) & 63];
	for (d = argv[1][0], q = 0; q < length; q++)
		if ((char)d <= argv[1][q])
			d = argv[1][q];
	srand(d ^ 14);
	p[3] = l[rand() & 63];
	for (d = 0, q = 0; q < length; q++)
		d += argv[1][q] * argv[1][q];
	p[4] = l[(d ^ 239) & 63];
	for (d = 0, q = 0; (char)q < argv[1][0]; q++)
		d = rand();
	p[5] = l[(d ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
