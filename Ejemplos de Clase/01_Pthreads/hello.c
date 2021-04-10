#include <stdio.h>
#include <pthread.h>

void* helloWorldRun(void* data) {

    printf("Hello world from secondary thread!!!\n");
    printf("data = %zu\n", (size_t)data);

    return NULL;
}

int main(void) {

    printf("Hello World from main thread\n");
    pthread_t thread;
    pthread_create(&thread,  NULL, helloWorldRun, (void*)2021);

    pthread_join(thread, NULL);

    return 0;
}