#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[22];
    long c[9];
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
