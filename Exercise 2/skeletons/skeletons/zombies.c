/* gcc -Wall -std=gnu99 zombies.c
 * Note: Only really "useful" on *nix systems, Windows with gcc or similar won't be all that helpful here
 * The idea is to see what zombie processes are
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void create_zombie(unsigned int wait)
{
    pid_t child = fork();

    printf("Child_pid: %i", child);
    if (child > 0) {
        sleep(wait);
    }
    else {
        //Failed to fork
        exit(0);
    }
}

int main(void)
{
    unsigned int wait = 18;

	create_zombie(wait);

	// As we don't care about the return of the program, we won't reap this process. We'l leave that to the init
	return 0;
}
