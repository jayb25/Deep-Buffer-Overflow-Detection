#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = k/j;
   l = l/j;
   l = j%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[33];
    int c[83];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
