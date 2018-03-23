#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=22;
   int k;
   int l;
   k = 53;
   l = 62;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[81];
    long c[35];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
