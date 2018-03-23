#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k/2;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[20];
    long c[48];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
