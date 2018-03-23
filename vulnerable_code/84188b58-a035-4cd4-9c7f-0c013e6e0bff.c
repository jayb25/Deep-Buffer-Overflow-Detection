#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1228;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = l/j;
   l = l/j;
   l = j/j;
   l = i-j;
   l = l%j;
   l = l%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[24];
    a = 0;
    while (a > -1) {
        //random
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
