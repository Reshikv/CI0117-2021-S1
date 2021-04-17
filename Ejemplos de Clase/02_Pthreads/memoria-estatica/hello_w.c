// Copyright 2021 Jeisson Hidalgo-Cespedes <jeisson.hidalgo@ucr.ac.cr> CC-BY-4
// Creates an arbitrary amound of threads that greet in stdout

#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void* run(void* data);

int main(int argc, char* argv[]) {
  size_t thread_count = sysconf(_SC_NPROCESSORS_CONF);
  if (argc == 2) {
    if (sscanf(argv[1], "%zu", &thread_count) != 1 || errno) {
      fprintf(stderr, "error: invalid thread count");
      return EXIT_FAILURE;
    }
  }

  pthread_t thread[thread_count];
  for (size_t index = 0; index < thread_count; ++index) {
    if (pthread_create(&thread[index], /*attr*/ NULL, run, (void*)index)
        == EXIT_SUCCESS) {
    } else {
      fprintf(stderr, "Could not create secundary thread %zu\n", index);
      return EXIT_FAILURE;
    }
  }

  printf("Hello from main thread\n");

  for (size_t index = 0; index < thread_count; ++index) {
    pthread_join(thread[index], /*value_ptr*/ NULL);
  }

  return EXIT_SUCCESS;
}

void* run(void* data) {
  const size_t thread_number = (size_t)data;
  printf("Hello from secundary thread %zu\n", thread_number);

  return NULL;
}
