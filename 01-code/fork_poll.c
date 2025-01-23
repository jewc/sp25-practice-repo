#include <unistd.h>  // for fork()
#include <stdio.h>   // for printf()
#include <stdlib.h>  // for exit() and EXIT_SUCCESS
#include <sys/wait.h>

int global_num = 1;

void function() {
  global_num++;
  printf("%d\n", global_num);
}

int main() {
  pid_t id = fork();

  if (id == 0) {
    function();
    id = fork();
    if (id == 0) {
      function();
    }
    return EXIT_SUCCESS;
  }

  global_num += 2;
  printf("%d\n", global_num);
  return EXIT_SUCCESS;
}
