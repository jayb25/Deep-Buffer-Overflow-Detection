#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k=4;
   int l=9;
   for (l=8; l<1+j; l+=1) 
     {
        k = k+i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[10];
    long c[9];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
     }
   printf("%d\n",k);
   return 0;
}
