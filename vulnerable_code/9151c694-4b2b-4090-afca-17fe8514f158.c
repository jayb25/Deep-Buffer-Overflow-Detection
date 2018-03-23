#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1244;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[88];
    long c[69];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
