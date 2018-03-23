#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=123;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k+j;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[93];
    long c[24];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
