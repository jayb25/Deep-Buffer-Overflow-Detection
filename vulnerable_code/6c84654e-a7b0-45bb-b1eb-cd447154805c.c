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
    char b[67];
    char c[23];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
     }
   printf("\n");
   return 0;
}
