#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = 6-j;
   l = l%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[89];
    long c[80];
    a = 0;
    while (a < strlen(b)) {
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
