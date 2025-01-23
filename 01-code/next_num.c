// This program is just to demonstrate one of the uses of the `static` keyword

#include <stdio.h>   // for printf
#include <stdlib.h>  // for EXIT_SUCCESS

int next_num();

int main(int argc, char** argv) {
  // prints 1 then 2 then 3 then ...
  printf("%d\n", next_num());
  printf("%d\n", next_num());
  printf("%d\n", next_num());
  printf("%d\n", next_num());
  printf("%d\n", next_num());
}

int next_num() {
  // marking this variable as static means that
  // the value is preserved between calls to the function
  // this allows the function to "remember" things
  static int counter = 0;
  counter++;
  return counter;
}
