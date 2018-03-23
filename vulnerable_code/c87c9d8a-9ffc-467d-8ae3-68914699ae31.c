#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 13;
   l = 644;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[93];
    int c[38];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
