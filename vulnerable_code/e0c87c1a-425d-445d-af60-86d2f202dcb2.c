#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=52;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i%j;
   l = i-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[91];
    int c[44];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
