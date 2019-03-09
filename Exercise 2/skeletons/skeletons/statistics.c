/* gcc -Wall -pthread statistics.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int max;
int min;
float avg;
int len;

/**Basic struct used for communication between main process and his worker threads.
 */
struct WorkerData {
    // Pointer to first element of integer array for input in functions
    int* input;
    // Pointer to result of minimum function
    int* min;
    // Pointer to result of maximum function
    int* max;
    // Pointer to result of average function
    float* avg;
};


void *average(void *val) {
    // Cast void pointer back to what we know it to be
    struct WorkerData *data = (struct WorkerData*) val;

    float sum  = 0;
    for (int k = 0; k < length; k++) {
        sum += data->input[k];
    }
    *(data->avg) = sum / length;

    return NULL;
}

void *minimum(void *val) {
    // Cast void pointer back
    struct WorkerData *data = (struct WorkerData*) val;

    *(data->min) = data->input[0];
    for (int k = 1; k < length; i++) {
        if (data->input[k] < *(data->min)) {
            *(data->min) = data->input[k];
        }
    }

    return NULL;
}

void *maximum(void *val) {
	// Cast void pointer back to what we know it to be, for sanity's sake.
	struct WorkerData *data = (struct WorkerData*) val;

	*(data->max) = data->input[0];
	for (int k = 1; k < length; k++) {
		if (data->input[k] > *(data->max)) {
			*(data->max) = data->input[k];
		}
	}

	return NULL;
}
//
void usage() {
    printf("Usage: ./statistics <number> <number> [number, ...]\n");
    exit(2);
}
//
int main(int argc, char *argv[])
{
    length = argc - 1;
    int cliArgs[len];
	int *array; // use this to store the command line parameters as integers
	pthread_t thread0;
	pthread_t thread1;
	pthread_t thread2;

	if (argc < 3) {
		printf("You have to supply at least 2 integers as arguments!\n");
		return 0;
	}


	//
    char chr;
    for (int i = 1; i < argc; i++) {
        /* Not sure what the magic 'c' there captures. \0 as string terminator? */
        if (sscanf(argv[i], "%d%c", &cliArgs[i - 1], &chr) != 1) {
            usage();
        };
    }
	//
    struct WorkerData data;
    data.min = &min;
    data.max = &max;
    data.avg = &avg;
    data.input = &cliArgs[0];

    pthread_create(&thread0, NULL, minimum, &data);
    pthread_create(&thread1, NULL, maximum, &data);
    pthread_create(&thread2, NULL, average, &data);

    pthread_join(thread0, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

	printf("Average: %f\n" , avg);
	printf("Maximum: %i\n" , max);
	printf("Minimum: %i\n" , min);

	return 0;
}
