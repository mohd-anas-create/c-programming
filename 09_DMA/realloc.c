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
      printf("enter grades:\n");
  for(int i = 0; i<n; i++)
  {
    scanf(" %c", &ptr[i]);
  }
  int newnum;
  printf("enter new number of grads:\n");
  scanf(" %d", &newnum);
  char *ptr2;
  ptr2 = realloc(ptr, newnum * sizeof(char));
  if(ptr2==NULL)
  {
    printf("memory reallocation failed!");
  }
  else
  {
    ptr = ptr2;
    ptr2 = NULL;
    printf("Enter new scores:\n");
    for(int i=n; i<newnum; i++){
      scanf(" %c", &ptr[i]);
    }
      for(int i = 0; i<newnum; i++)
    {
        printf("Grade #%d : %c\n", i+1,  ptr[i]);
    }
  }
   
  free(ptr);
  ptr = NULL;
   return 0;
}