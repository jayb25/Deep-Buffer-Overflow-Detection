#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 56;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = j+j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[35];
    long c[58];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
