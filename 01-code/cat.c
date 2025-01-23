///////////////////////////////////////////////////////////////////////////////
// includes
///////////////////////////////////////////////////////////////////////////////

// System level headers
#include <stdbool.h>  // for the bool type
#include <stdio.h>    // for printf()
#include <stdlib.h>   // for malloc(), exit(), EXIT_SUCCESS, EXIT_FAILURE
#include <string.h>   // for strlen()
#include <unistd.h>   // for write()

// local headers
#include "./read_stdin.h"

///////////////////////////////////////////////////////////////////////////////
// Declare helper function
///////////////////////////////////////////////////////////////////////////////

// If we do not declare this before main,
// we will get a warning during compilation

// given a string, prints it to the terminal (via stdout)
// returns false on error
bool print_stdout(char* to_print);

///////////////////////////////////////////////////////////////////////////////
// function definitions
///////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
  char* curr = NULL;

  while (read_stdin(&curr)) {
    if (!print_stdout(curr)) {
      free(curr);
      exit(EXIT_FAILURE);
    }
    free(curr);
  }

  return EXIT_SUCCESS;
}

bool print_stdout(char* to_print) {
  // printf("%s\n", str);
  size_t len = strlen(to_print);
  ssize_t res = write(STDOUT_FILENO, to_print, len);
  if (res < 0) {
    return false;
  }
  if (((size_t)res) < len) {
    return false;
  }
  return true;
}
