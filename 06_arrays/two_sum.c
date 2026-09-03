#include<stdio.h>
#include<math.h>
int main()
{
  int count=0;
  int target;
   int n;
  printf("enter array length\n");
  scanf("%d", &n);
  if(n<2 || n>pow(10, 4)){
    printf("Error. \narray length should range from 2 to 10^4\n");
    return 1;
  }
  int num[n];
  printf("enter your elements:\n");
   for(int i=0; i<n; i++){
    scanf("%d", &num[i]);
    if(num[i]<-pow(10, 9) || num[i]>pow(10, 9)){
      printf("Error. \nelement cannot be less than -10^9 or more than 10^9\n");
      return 1;
    }
   }
  printf("enter the target number\n");
  scanf("%d", &target);
   if(target<-pow(10, 9) || target>pow(10, 9)){
      printf("Error.\nTarget cannot be less than -10^9 or more than 10^9\n");
      return 1;
    }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      
        if((num[i]+num[j])==target){
        printf("[%d, %d]\n", i, j);
        count++;
      }
      
    }
  }
  if(count==0){
    printf("target not found");
  }
  return 0;
}