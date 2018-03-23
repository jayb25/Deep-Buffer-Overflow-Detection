#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i%j;
   l = l-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[17];
    long c[81];
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
    
   printf("%d\n",k);
   ;
   return 0;
}
