#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1141;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[61];
    long c[19];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
