#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = j/j;
   l = j%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[58];
    int c[57];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
