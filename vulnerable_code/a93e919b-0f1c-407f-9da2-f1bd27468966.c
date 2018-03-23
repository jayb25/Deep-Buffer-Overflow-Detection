#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=3242;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = -j;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[41];
    long c[48];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
