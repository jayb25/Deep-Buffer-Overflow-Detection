#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[43];
    long c[6];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
