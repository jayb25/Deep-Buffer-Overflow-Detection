#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   k = 533;
   l = 64;
   k = 9/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[86];
    long c[89];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
