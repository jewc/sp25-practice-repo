#include <stdio.h>
#include <stdlib.h>

// C needs to see a function declared before it is used.
// comment the line below in to make this compile
// char* get_string();

int main(int argc, char* argv[]) {
  int x = 5;
  printf("%d\n", x);
  char* string = get_string();
  printf("%s\n", string);
  return EXIT_SUCCESS;
}

char* get_string() {
  return "Hello, World!";
}
