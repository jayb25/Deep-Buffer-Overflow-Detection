#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = j%j;
   l = l%j;
   l = k-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[68];
    long c[70];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
