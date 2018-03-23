#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = j-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[91];
    int c[52];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
