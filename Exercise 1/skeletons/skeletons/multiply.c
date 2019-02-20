/* gcc -Wall net.c
 * calculate product of two numbers between 0 and 9
 * Run as "gcc -Wall multiply.c num0 num1", for example, "gcc -Wall multiply.c 3 2"
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h> //added this to have access to the isdigit function

void invalid() {
	printf("Usage: ./cli <num0> <num1>\n");
	exit(2);
}

int main(int argc, char *argv[])
{
	uint8_t num0;
	uint8_t num1;
	uint8_t product;

	char *bin;

	/* There are 3 argument, the first argument is the program name */
	if (argc != 3) {
		invalid();
	}

	/* Only regarding the two input values entered.
	 * If there are more, they will be ignored. */
	num0 = strtol(argv[1], &bin, 10);
	num1 = strtol(argv[2], &bin, 10);

	// checking all invalid case
	if (num0 > 9 || num1 > 9 || num0 < 0 || num1 < 0 || !isdigit(num0) || !isdigit(num1)) {
		printf("Both arguments must be integers between 0 and 9!\n");
		exit(2);
	}

	product = num0 * num1;

	printf("%u * %u = %u\n", num0, num1, product);

	return 0;
}


