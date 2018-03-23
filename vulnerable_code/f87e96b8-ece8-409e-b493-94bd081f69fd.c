#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[63];
    int c[95];
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
