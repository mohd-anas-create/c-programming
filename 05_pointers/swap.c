#include<stdio.h>
int main(){
   int a=45, b=72;
   printf("the values before swapping: %d and %d\n", a, b);
   swap(&a, &b);
   printf("the values after swapping: %d and %d\n", a, b);
   return 0;
}
void swap(int *x, int *y);
void swap(int *x, int *y){
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}