#include<stdio.h>
int main()
{
  int a = 72;
  int *k=&a;
  int **p=&k;
  printf("The value of a is: %d\n", a);
  printf("The value of a using pointer k is: %d\n", *&k);
  printf("The address of a is: %p\n", k);
  printf("The address of address of a is: %p\n", p);

  return 0;
}