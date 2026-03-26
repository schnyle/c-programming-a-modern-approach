// Create and run Kernighan and Ritchie's famous "hello, world" program:
// #include <stdio.h>
// int main(void)
//
// {
//   printf("hello, world\n");
// }
// Did you get a warning message from the compiler? If so, what's needed to make it go away?

#include <stdio.h>

int main(void)
{
  printf("hello, world\n");
}

// Nope... no warning message. Seems like C99 will add a return 0 implicity, wihich C89 will not.
