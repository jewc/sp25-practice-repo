#ifndef READ_STDIN_H_
#define READ_STDIN_H_
// above and at the end of the file are headerguards
// it prevents the issue of a header being included twice

#include <stdbool.h>  // for the bool type

// declares a "constant"
#define MAX_INPUT_LEN 100

// declare a function so that other files can use it if
// it includes this header file

// reads up to MAX_INPUT_LEN characters from stdin
// those characters are stored on a string on the heap,
// which is returned by
bool read_stdin(char** output);

#endif  // READ_STDIN_H_
