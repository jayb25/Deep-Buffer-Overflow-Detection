#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=42;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[6];
    int c[53];
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
