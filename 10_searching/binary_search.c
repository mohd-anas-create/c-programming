#include <stdio.h>
int main()
{
  int arr[100];
    for(int i = 0; i < 100; i++)
  {
    arr[i] = i+1;
  }
  int a = 0, b = 99;
  int target;
    printf("Enter the number you want to search:\n");
   scanf("%d", &target);
  int length = (a+b)/2;
  int temp = arr[length];

  while(a <=b)
  {
     if(target > temp)
     {
      a = length + 1;
      length = (a+b)/2;
      temp = arr[length];
     }
     else if(target < temp)
     {
      b = length - 1;
      length = (a+b)/2;
      temp = arr[length];
     }
     else
     {
      break;
     }
  }
  if(temp == target)
  {
    printf("The element is at index %d", length);
  }
  else{
    printf("element is not present!");
  }

  return 0;
}