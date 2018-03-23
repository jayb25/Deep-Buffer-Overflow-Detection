#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[49];
    long c[5];
    a = 0;
    while (a > -1) {
        //random
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
