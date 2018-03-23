#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 58;
   l = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[39];
    long c[49];
    a = 0;
    do {
        //random
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
