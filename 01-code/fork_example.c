#include <unistd.h>  // for fork()
#include <stdio.h>   // for printf()
#include <stdlib.h>  // for exit() and EXIT_SUCCESS
#include <sys/wait.h>

int main() {
  int x = 13;
  pid_t pid = fork();

  if (pid == 0) {
    x--;
    printf("I'm the child!\n");
    printf("x = %d\n", 12); 
    exit(EXIT_SUCCESS);
  }

  printf("I'm the parent\n");
  printf("x = %d\n", x);

  return EXIT_SUCCESS;
}
