/* gcc -Wall net.c
 * calculate from host IP-Address the corresponding subnet
 */

#include <stdio.h>
#include <stdint.h>

int main(void) {
	uint8_t add[] = {129, 169, 25, 100};
	uint8_t sub[] = {255, 255, 240, 0};
	uint8_t net[4];

	int k = 0;

	for (k = 0; k <= sizeof(net) - 1; k++) {
		net[k] = add[k] & sub[k];
	}

	printf("net address: %u.%u.%u.%u\n", net[0], net[1], net[2], net[3]);

	return 0;
}
