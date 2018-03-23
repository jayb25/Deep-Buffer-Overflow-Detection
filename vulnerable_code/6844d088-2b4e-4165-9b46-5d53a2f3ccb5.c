#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1224;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l+k;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[36];
    long c[31];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
