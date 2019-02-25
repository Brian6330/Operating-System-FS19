/* gcc -Wall -O substr.c
 * Substring of the word "nicht", using the last 3 letters, which leads to "cht"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void panic(const char *serror)
{
	printf("%s", serror);
	exit(1);
}

static void *xmalloc(size_t size)
{
	void *ptr;
	if (size == 0)
		panic("Size is 0!\n");
	ptr = malloc(size);
	if (!ptr)
		panic("No mem left!\n");
	return ptr;
}

static char *substring(const char *str, off_t pos, size_t len)
{
	char *out;

	/* pos and len are unsigned, no need for negativity checks.
	 * only check if len is equal to 0 and also if the string's bounds are exceeded. */
	if (len == 0) {
		panic("Length must be larger than 0!");
	} else if (pos + len > strlen(str)) {
		panic("Substring exceeds string length!");
	}

	// One additional byte needed for the 0 separator
	out = xmalloc(len + 1);
	// str pointer always to the *beginning* of char array, so we add pos to offset by n bytes
	strncpy(out, str + pos, len);
	out[len] = (char)0;
	return out;
}

int main(int argc, char **argv)
{
	char *foo = "Nicht\n";
	char *bar = substring(foo, 2, 3);
	printf("%s", bar);
	free(bar);
	return 0;
}
