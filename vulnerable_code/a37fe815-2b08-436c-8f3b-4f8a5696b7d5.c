#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=51;
   int k;
   int l;
   k = 533;
   l = 64;
   l = l/j;
   l = i%j;
   l = l+j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[56];
    int c[47];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
