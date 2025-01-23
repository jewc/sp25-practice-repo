#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

// assume this function works
size_t str_len(char* str) {
  size_t len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

char* dup_str(char* to_copy) {
  size_t len = str_len(to_copy);
  char* res = malloc(sizeof(char) * len);
  for (size_t i = 0; i < len; i++) {
    res[i] = to_copy[i];
  } 
  return res;
}

int main() {
  char* literal = "Hello!";
  char* duplicate = dup_str(literal);
  char* ptr = duplicate;
  while (*ptr != '\0') {
    printf("%s\n", ptr);
    // printf line is fine
    ptr += 1;
  }
  free(duplicate);
  free(ptr);
  free(literal);
}
