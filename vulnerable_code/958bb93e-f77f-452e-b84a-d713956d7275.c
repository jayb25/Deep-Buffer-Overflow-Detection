#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1224;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   k = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[23];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
