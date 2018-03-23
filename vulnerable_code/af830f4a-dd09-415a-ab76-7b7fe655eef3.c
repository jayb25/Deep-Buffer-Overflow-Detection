#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1424;
   int k;
   int l;
   j = 533;
   l = 64;
   k = k%j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[45];
    long c[30];
    a = 0;
    while (a > -1) {
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
