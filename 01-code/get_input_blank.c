// This example should be on the simpler side
// for a slightly more complex program that shows
// better C style and more C features, see:
// - cat.c
// - read_stdin.c
// - read_stdin.h

#include <stdlib.h>  // for malloc, EXIT_SUCCESS
#include <string.h>  // for strlen
#include <unistd.h>  // for read() and write()

// defines a "constant"
#define MAX_INPUT_SIZE 100

// function declarations need to be seen before they are used.
// otherwise compiler will complain

// reads up to MAX_INPUT_SIZE characters from stdin and returns it
// returns NULL on error or EOF
char* read_stdin();

// prints `to_print` to std_out
void print_stdout(char* to_print);

// modifies the characters refered to by to_trunc
// such that the string now terminates at the end of the first word.
// The end of the first word is marked with a space ' ' character.
void truncate_to_first_word(char* to_trunc);

int main(int argc, char** argv) {
  char* str = read_stdin();
  truncate_to_first_word(str);
  print_stdout(str);

  return EXIT_SUCCESS;
}

void print_stdout(char* to_print) {
  // TODO
}

char* read_stdin() {
  // TODO
  return NULL;
}

void truncate_to_first_word(char* to_trunc) {
  // TODO
}
