#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1322;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = i+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[15];
    long c[43];
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
