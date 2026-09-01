#include<stdio.h>
float weight(float);
float g= 9.8;
int main()
{
  float m;
  printf("Enter mass: ");
  scanf("%f", &m);
  float result = weight(m);
  printf("weight value is: %f", result);
  return 0;
}
float weight(float mass){
   float w= mass*g;
   return w;
}