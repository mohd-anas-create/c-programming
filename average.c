#include<stdio.h>
float average(int, int, int);
int main()
{
  float result = average(10, 20, 25);
  printf("average value is: %f", result);
  return 0;
}
float average(int a, int b, int c)
{
  float avg = (a+b+c)/3.0;
  return avg;
}