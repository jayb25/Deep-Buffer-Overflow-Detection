#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = l%j;
   l = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[67];
    long c[97];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
