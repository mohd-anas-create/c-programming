#include<stdio.h>
int main()
{
  int a, b, product;
  printf("Enter the length of the rectangle: ");
  scanf("%d", &a);
  printf("Enter the width of the rectangle: ");
  scanf("%d", &b);
  product= a*b;
  printf("Area of the rectangle is: %d", product);
  return 0;
}