#include <unistd.h>  // for fork()
#include <stdio.h>   // for printf()
#include <stdlib.h>  // for exit() and EXIT_SUCCESS

int main(int argc, char* argv[]) {
  // int x = 12;
  
  fork();

  // x++;

  printf("Hello!\n");
  // printf("%d\n", x);

  exit(EXIT_SUCCESS);
}
