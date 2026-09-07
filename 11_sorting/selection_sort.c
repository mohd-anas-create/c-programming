#include <stdio.h>
int main() 
{
  int arr[10];
  int smallest;
  int temp;
  printf("enter 10 numbers: \n");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
  }
   for(int i = 0; i < 10; i++)
   {
    smallest = i;
    for(int j = i+1; j < 10; j++)
    {
      if(arr[smallest] > arr[j])
      {
        smallest = j;
      } 
    }
    temp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = temp;
   }
   for(int i = 0; i < 10; i++)
   {
    printf("%d ", arr[i]);
   }
  return 0;
} 