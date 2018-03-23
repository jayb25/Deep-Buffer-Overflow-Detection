#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = j/j;
   l = j%j;
   l = l+j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[97];
    long c[68];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
