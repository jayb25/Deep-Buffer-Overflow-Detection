#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   j = i-j;
   l = l%j;
   l = i%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[64];
    int c[93];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
