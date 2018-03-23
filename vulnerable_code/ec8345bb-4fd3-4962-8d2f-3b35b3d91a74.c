#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   k = l/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = l/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[19];
    long c[69];
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
