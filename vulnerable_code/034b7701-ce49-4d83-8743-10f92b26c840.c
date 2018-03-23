#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=148;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[39];
    long c[61];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
