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
   l = j-j;
   l = i/j;
   l = l-j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[43];
    long c[28];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
