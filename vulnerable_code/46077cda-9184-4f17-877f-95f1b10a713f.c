#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=4244;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = -j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[60];
    int c[83];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
