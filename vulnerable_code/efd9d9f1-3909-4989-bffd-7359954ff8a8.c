#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1442;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;
   k = i%j;
   l = j-j;
   l = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[60];
    int c[65];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
