#include <stdio.h>

/**

* main - Entry point

*

* Return: Always 0 (Success)

*/

int main(void)

{
  
  int in;
  
  long int l_in;
  
  long long int ll_in;
  
  char chr;
  
  float flt;
  

  
  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(chr));
  
  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
  
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l_in));
  
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll_in));
  
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
  
  return (0);
  
}
