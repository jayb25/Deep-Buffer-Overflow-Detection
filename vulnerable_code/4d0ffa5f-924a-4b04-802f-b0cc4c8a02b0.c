#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   i = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[19];
    long c[8];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
