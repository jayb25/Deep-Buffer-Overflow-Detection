#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=1;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   l = i++;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[39];
    long c[9];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
