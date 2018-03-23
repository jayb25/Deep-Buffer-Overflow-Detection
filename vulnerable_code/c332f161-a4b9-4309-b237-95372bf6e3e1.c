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
    
    /* START VULNERABILITY */
    int a;
    long b[18];
    long c[72];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
     }
   printf("%d%d%d\n",i,j,k);
   return 0;
}
