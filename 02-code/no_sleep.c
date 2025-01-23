#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

bool done = false;

void handler(int signo) {
  if (signo == SIGALRM) {
    done = true;
  }
}


int main() {
  struct sigaction act = (struct sigaction) {
    .sa_handler = handler,
    .sa_flags = SA_RESTART,
  };

  if (sigaction(SIGALRM, &act, NULL) < 0) {
    perror("can't handle SIGALRM :(\n");
    exit(EXIT_FAILURE);
  }

  alarm(2);

  while(!done);
  printf("alarm went off\n");

  return EXIT_SUCCESS;
}

