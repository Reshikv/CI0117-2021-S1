#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void* runHello(void* data);
void* runGoodbye(void* data);

int main(void) {
  pthread_t thread;
  
  if (pthread_create(&thread, /*attr*/ NULL, runHello, (void*)1) == EXIT_SUCCESS) {
    printf("Hello from main thread\n");
    printf("Goodbye from main thread\n");
    pthread_join(thread, /*value_ptr*/ NULL);
  } else {
    fprintf(stderr, "Could not create runHello thread\n");
    return EXIT_FAILURE;
  }

  if (pthread_create(&thread, /*attr*/ NULL, runGoodbye, (void*)2) == EXIT_SUCCESS) {
    pthread_join(thread, /*value_ptr*/ NULL);
  } else {
    fprintf(stderr, "Could not create runGoodbye thread\n");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

void* runHello(void* data) {
  printf("Hello from secondary thread\n");
  printf("data received = %zu\n", (size_t) data);
  return NULL;
}

void* runGoodbye(void* data) {
  printf("Goodbye from secondary thread\n");
  printf("data received = %zu\n", (size_t) data);
  return NULL;
}