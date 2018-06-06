#include "hello.c"

int main() {
  Hello h = {123};
  say_hello(h);

  int r = add(1, 2);
  printf("result: %d", r);

  return 0;
}

