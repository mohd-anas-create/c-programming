#include <stdio.h>
int main()
{
  int i = 0;
  int target;
  int arr[] = {10, 20, 25, 30, 35, 40, 0, 45, 50, 55, 60};
  int length = sizeof(arr)/sizeof(arr[0]);
  printf("Enter the number you want to find: \n");
  scanf("%d", &target);
  while(i < length)
  {
     if(arr[i] == target){
      printf("Your number is at position: #%d\n", i+1);
      break;
     }
     i++;
  }
  if(i == length){
       printf("element not found!");
  }
    return 0;
}
