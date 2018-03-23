#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 538;
   l = 64;
   k = l+j;
   i = i/j;
   l = i%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[62];
    long c[61];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
