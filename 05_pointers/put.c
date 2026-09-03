#include<stdio.h>
int main()
{
  char str[100];
  printf("Enter a string: ");
  scanf("%[^\n]s", str);
  gets(str);
  puts(str);
  printf("The string is: %s\n", str);
  return 0;
}