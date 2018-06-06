#include "hello.h"
#include <stdio.h>

void say_hello(Hello h) {
  printf("a = %d", h.a);
}

int add(int a, int b) {
  return a + b;
}