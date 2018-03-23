#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[22];
    long c[33];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
