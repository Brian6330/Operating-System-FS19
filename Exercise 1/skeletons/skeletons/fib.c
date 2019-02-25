/* gcc -Wall -O2 fib.c
 * Prints the 10th Fibonacci Number which is 55
 */

#include <stdio.h>
#include <stdint.h>

int fib(int a) {
	if (a == 1 || a == 2) {
		return 1;
	} else {
		return fib(a - 1) + fib(a - 2);
	}
	return a;
}

int main(void)
{
	printf("%i", fib(10));

	return 0;
}
