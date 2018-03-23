#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=342;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = l%j;
   l = l-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[89];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
