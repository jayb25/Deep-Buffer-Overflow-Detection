#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=52;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i%j;
   l = i-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[73];
    long c[56];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
