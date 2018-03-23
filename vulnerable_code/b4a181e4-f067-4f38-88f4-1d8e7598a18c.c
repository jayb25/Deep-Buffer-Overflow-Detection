#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = j%j;
   l = k%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[97];
    int c[56];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
