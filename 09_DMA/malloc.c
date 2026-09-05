#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("enter n:\n");
  scanf("%d", &n);
  char *ptr;
  ptr = (char*) malloc(n * sizeof(char));
   if(ptr==NULL){
    printf("memory allocation failed1");
    return 1;
   }
   else{
      printf("enter grades:\n");
  for(int i = 0; i<n; i++)
  {
    scanf(" %c", &ptr[i]);
  }
  for(int i = 0; i<n; i++)
  {
    printf("Grade #%d : %c\n", i+1,  ptr[i]);
  }
   }
   free(ptr);
   ptr = NULL;
   return 0;
}