#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k-j;
   l = i/j;
   l = i/j;
   l = l+j;
   l = k%j;
   i = l%j;
   l = l%j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[49];
    int c[38];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
