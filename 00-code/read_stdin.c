#include <stdbool.h>  // for the bool type
#include <stdlib.h>   // for malloc()
#include <unistd.h>   // for read()

#include "./read_stdin.h"

bool read_stdin(char** output) {
  char* str = (char*)malloc(sizeof(char) * (MAX_INPUT_LEN + 1));
  if (str == NULL) {
    // malloc error
    return false;
  }

  ssize_t res = read(STDIN_FILENO, str, MAX_INPUT_LEN);
  if (res <= 0) {
    // read error or EOF was read
    free(str);
    return false;
  }

  str[res] = '\0';
  // "return" the string through output
  *output = str;

  return true;
}
