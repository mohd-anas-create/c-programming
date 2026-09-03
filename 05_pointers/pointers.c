#include<stdio.h>
int main()
{
  int *p;
  int a= 72;
  p= &a;
  printf("the value of a is %d\n", a);
  printf("the address of a is %u", p);
  return 0;
}