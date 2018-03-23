#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   i = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[43];
    long c[6];
    a = 0;
    while (b[a] != 0) {
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
