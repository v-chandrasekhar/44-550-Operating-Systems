#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

// global variable a initializes the value to 0
long a = 0;

// doubleTheValue function will repeatedly double the global value 1000000 times
void * doubleTheValue ( void* args);
// incrementTheValue function will repeatedly increment the global value 1000000
void * incrementTheValue ( void* args);
int main() {

  pthread_t t1, t2;
  void* nothing;
  // create two threads
  pthread_create (&t1, NULL, doubleTheValue, NULL);
  pthread_create (&t2, NULL, incrementTheValue, NULL);
  //Join the threads
  pthread_join(t1, &nothing);
  pthread_join(t2, &nothing);
  // printing the global variable
  printf("a is: %d\n", a);

  return 0;
}

void * doubleTheValue (void * args) {
  int i = 0;
  for (; i < 1000000; i++)
    a *= 2;
  printf("thread 1 :%d\n", a);
  pthread_exit(NULL);
}

void * incrementTheValue (void * args) {
  int i = 0;
  for (; i < 1000000; i++)
    a++;
  printf("thread 2 :%d\n", a);
  pthread_exit(NULL);
}
