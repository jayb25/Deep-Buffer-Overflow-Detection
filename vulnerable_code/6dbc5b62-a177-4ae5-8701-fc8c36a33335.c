#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[22];
    long c[83];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
