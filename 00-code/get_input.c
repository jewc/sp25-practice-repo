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
  if (str == NULL) {
    return EXIT_SUCCESS;
  }

  truncate_to_first_word(str);

  print_stdout(str);

  return EXIT_SUCCESS;
}

void print_stdout(char* to_print) {
  write(STDOUT_FILENO, to_print, strlen(to_print));
}

char* read_stdin() {
  // why is this a problem?
  // char str[MAX_INPUT_SIZE + 1];
  char* str = (char*)malloc(sizeof(char) * MAX_INPUT_SIZE + 1);
  if (str == NULL) {
    return NULL;
  }

  ssize_t res = read(STDIN_FILENO, str, MAX_INPUT_SIZE);

  if (res <= 0) {
    return NULL;
  }

  str[res] = '\0';

  return str;
}

void truncate_to_first_word(char* to_trunc) {
  size_t len = strlen(to_trunc);
  for (size_t i = 0; i < len; i++) {
    // if we found the space character
    if (to_trunc[i] == ' ') {
      // replace it with the null-terminator character, that marks the
      // end of a string. Characters beyond this point in the string would
      // still exist, they just wouldn't get printed or counted by strlen()
      to_trunc[i] = '\0';
      break;
    }
  }
}
