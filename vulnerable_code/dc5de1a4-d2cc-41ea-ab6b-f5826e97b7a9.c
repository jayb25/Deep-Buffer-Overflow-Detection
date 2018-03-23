#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53338==644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[17];
    long c[86];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
