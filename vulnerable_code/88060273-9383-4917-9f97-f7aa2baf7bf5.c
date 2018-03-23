#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1224;
   int k;
   int l;
   k = 53;
   l = 64;
   k = 6/j;
   l = i%j;
   l = i/j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[53];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,k);
   return 0;
}
