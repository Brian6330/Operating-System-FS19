/* gcc -Wall ./memory.c -o memory */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <stdint.h>
/*
 * System used: Windows 10 64 Bit
 */

#define PAGE_SIZE 4096;

int calculate_page (uint32_t address) {
	return address / PAGE_SIZE;
}

int calculate_offset (uint32_t address) {
	return address % PAGE_SIZE;
}

int main(int argc, char *argv[])
{
	long long_input;
	uint32_t address;
	int offset , page;

	if (argc != 2) {
		printf("You must provide a parameter as input!\n");
		return -1;
	} else {
		long_input = atol(argv[1]);
		long supremum = pow(2 , 8*sizeof(uint32_t));
		if (long_input < 0 || long_input >= supremum) {
			printf("You must enter a valid 32bit address as parameter!\n");
			return -1;
		} else {
			address = (uint32_t) long_input;
		}
	}

	page = calculate_page(address);
	offset = calculate_offset(address);

	printf("The address %u contains:\n", address);
	printf("Page number: %i\n", page);
	printf("Offset: %i\n", offset);

	return 0;
}
