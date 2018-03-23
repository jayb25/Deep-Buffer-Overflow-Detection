#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i-j;
   l = i%j;
   l = l-j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[70];
    long c[47];
    a = 0;
    while (a > -1) {
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
