#include <stdio.h>
#include <stdlib.h>

// declare a point struct. Can be refered to as:
// - struct point_st
// - Point
typedef struct point_st {
  int x;
  int y;
} Point;

// these two are pass by value
void modify_int(int x);
void modify_point(Point p);

// these two pass a pointer (e.g. a reference),
// but the pointer/reference itself is passed by value
void modify_int_ptr(int* x);
void modify_point_ptr(Point* p);

int main(int argc, char** argv) {
  int x = 1;
  Point p = {1100, 2400};

  modify_int(x);
  // prints 1
  printf("%d\n", x);

  modify_point(p);
  // prints "x = 1100, y = 2400"
  printf("x = %d, y = %d\n", p.x, p.y);

  modify_int_ptr(&x);
  modify_point_ptr(&p);
  // now it prints:
  // "10"
  // "x = 3800, y = 4710"
  printf("%d\n", x);
  printf("x = %d, y = %d\n", p.x, p.y);

  return EXIT_SUCCESS;
}

void modify_int(int x) {
  // modifies a copy of x
  x = 10;
}

void modify_point(Point p) {
  // modifies a copy of p
  p.x = 3800;
  p.y = 4710;
}

void modify_int_ptr(int* x) {
  // this doesn't work because we are changing the pointer (reference)
  // instead of the thing that is being referred to
  /*
    int new_val = 10;
    x = &new_val;
  */

  // modifies the thing we are pointing at
  *x = 10;
}

void modify_point_ptr(Point* p) {
  // this doesn't work because we are changing the pointer (reference)
  // instead of the thing that is being referred to
  /*
  Point new_point = {3800, 4710};
  p = &new_point; // changes the reference `p`
  */

  // modify the thing p is referring to
  p->x = 3800;
  p->y = 4710;
}
