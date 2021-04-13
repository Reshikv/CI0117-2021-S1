#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void* helloWorldRun(void* data);

int main(void) {
    pthread_t thread;
    if (pthread_create(&thread,  NULL, helloWorldRun, (void*)2021) == EXIT_SUCCESS) {
        printf("Hello World from main thread\n");
        pthread_join(thread, NULL);
        return EXIT_SUCCESS;
    } else {
        fprintf(stderr, "Could not create secondary thread");
        return EXIT_FAILURE;
    }
}

void* helloWorldRun(void* data) {
    printf("Hello world from secondary thread!!!\n");
    printf("data = %zu\n", (size_t)data);
    return NULL;
}
