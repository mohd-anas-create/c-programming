#include <stdio.h>
int main()
{
  FILE *fptr;
  fptr = fopen("table.txt", "w");
    int table;
    printf("Enter the number whose multiplication table you want:\n");
    scanf("%d", &table);
    for(int i=1; i<=10; i++){
        fprintf(fptr, "%d\n", table*i);
    }
    fclose(fptr);
   
  
    return 0;
}