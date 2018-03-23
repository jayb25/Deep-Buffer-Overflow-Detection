#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = i%j;
   l = i/j;
   k = i-j;
   l = i/j;
   l = j%j;
   l = k-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[70];
    long c[13];
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
