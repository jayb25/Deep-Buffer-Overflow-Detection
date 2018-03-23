#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 64;
   k = k/j;
   i = i/j;
   l = i%j;
   l = i/j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[28];
    long c[39];
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
    
   printf("%d\n",i);
   return 0;
}
