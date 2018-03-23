#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=10;
   int k;
   int l;
   k = 533;
   l = 64;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[33];
    long c[97];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
