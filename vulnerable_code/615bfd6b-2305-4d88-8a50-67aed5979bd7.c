#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1442;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/3;
   l = i/j;
   l = l/j;
   l = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[91];
    int c[38];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
