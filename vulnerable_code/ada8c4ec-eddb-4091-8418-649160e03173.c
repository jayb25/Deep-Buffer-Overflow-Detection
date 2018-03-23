#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 53;
   l = +4;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = j+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[9];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",i,l);
   return 0;
}
