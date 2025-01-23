#include <unistd.h>  // for fork()
#include <stdio.h>   // for printf()
#include <stdlib.h>  // for exit() and EXIT_SUCCESS
#include <sys/wait.h>

int main(int argc, char* argv[]) {
  for (int i = 0; i < 4; i++) {
    fork();
  }

  printf(":)\n"); // "\n" is similar to endl
  return EXIT_SUCCESS;
}

