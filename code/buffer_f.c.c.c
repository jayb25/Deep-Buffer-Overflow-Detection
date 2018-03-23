#include <stdio.h>
#include <string.h>
int main() {
   int i[]= { 4,7,8,9,3,7,9 };
   int j;
   int num1=7;
   for (j=0; j<num1; j+=1) 
     {
        printf("%d",i[j]);
        printf("vulnerability");
     }
   printf("\n");
   return 0;
}
