#include <string.h>
#include <stdio.h>
#include <string.h>
int main() {
   int i[]= { 4,7,8,9,3,7,9 };
   int j;
   int num1=7;
   for (j=0; j<num1; j+=1) 
     {
        printf("%d",i[j]);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[76];
    int c[13];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
     }
   printf("\n");
   return 0;
}
