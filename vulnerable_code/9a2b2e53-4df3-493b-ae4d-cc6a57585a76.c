#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i = j;
   l = l%j;
   l = l-j;
   k = l-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[45];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",i,l);
   return 0;
}
