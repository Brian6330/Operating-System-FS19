/* gcc -Wall -std=gnu99 zombies.c
 * Note: Only really "useful" on *nix systems, Windows with gcc or similar won't be all that helpful here
 * The idea is to see what zombie processes are
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> //TODO Check if needed


void create_zombie() {
	pid_t pid;

	pid = fork();
	if (pid == 0){
		// "Child Process"
		// due to executing immediately, child process has not been reaped b the parent but left as a zombie
		exit(0);
	}
	else if (pid > 0){
		//"Parent process"
	}
	else{
		// Failed to fork
		printf("Forking has failed with the state %i", pid);
		exit(1);
	}
	return;
}

int main(void)
{
	int wait = 15;

	create_zombie();
	sleep(wait);

	// As we don't care about the return of the program, we won't reap this process. We'l leave that to the init
	return 0;
}
