#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = j-j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[28];
    long c[43];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
