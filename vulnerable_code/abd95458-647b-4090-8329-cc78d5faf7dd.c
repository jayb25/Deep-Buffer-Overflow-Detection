#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l%j;
   l = l-j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[56];
    int c[16];
    a = 0;
    while (a > -1) {
        //random
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
