#include<stdio.h>
int main()
{
  int principal=1000;
  int rate=5;
  int time=3;
  float interest;
  interest=(principal*rate*time)/100;
  printf("Simple interest is: %f \n", interest);
  printf("The net amount is: %f", principal+interest);

  return 0;
}