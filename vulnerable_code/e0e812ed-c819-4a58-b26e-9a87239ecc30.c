#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   k = 44;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = i-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[89];
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
