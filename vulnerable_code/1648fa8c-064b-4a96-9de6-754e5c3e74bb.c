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
    long b[92];
    long c[40];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
     }
   printf("%d\n",k);
   return 0;
}
