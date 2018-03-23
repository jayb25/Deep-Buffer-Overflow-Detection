#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=132;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[79];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
