#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j%j;
   l = l-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[62];
    int c[67];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
