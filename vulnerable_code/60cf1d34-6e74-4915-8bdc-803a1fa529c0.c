#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i-j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = k-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[5];
    int c[78];
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
