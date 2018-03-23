#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[96];
    int c[53];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
