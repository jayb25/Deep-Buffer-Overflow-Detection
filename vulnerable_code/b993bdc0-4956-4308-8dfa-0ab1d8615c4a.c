#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=16;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i%j;
   l = i-j;
   l = k%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[47];
    long c[19];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
