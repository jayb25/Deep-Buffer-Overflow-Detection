#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=324;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i-j;
   l = i/j;
   l = k%j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[16];
    int c[70];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
