#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=118;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = i%j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[24];
    long c[58];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
