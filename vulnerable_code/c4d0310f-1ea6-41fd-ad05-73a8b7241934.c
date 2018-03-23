#include <string.h>
#include <stdio.h>
#include <string.h>
int main() {
   int i[]= { 4,8,8,3,7,7,9 };
   int j;
   int num1=7;
   for (j=0; j<num1; j+=1) 
     {
        printf("%d",i[j]);

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[8];
    long c[78];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
     }
   printf("\n");
   return 0;
}
