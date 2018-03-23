#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i%j;
   l = l/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[63];
    long c[47];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
