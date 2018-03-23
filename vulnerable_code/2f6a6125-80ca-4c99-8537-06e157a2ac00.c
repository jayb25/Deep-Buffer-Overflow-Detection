#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1222;
   int k;
   int l;
   l = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[69];
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
