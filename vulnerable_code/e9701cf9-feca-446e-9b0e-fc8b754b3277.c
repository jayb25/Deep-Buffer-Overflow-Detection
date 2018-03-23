#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[7];
    int c[24];
    a = 0;
    while (a > -1) {
        //random
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
