#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 532;
   l = 64;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[71];
    long c[43];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
