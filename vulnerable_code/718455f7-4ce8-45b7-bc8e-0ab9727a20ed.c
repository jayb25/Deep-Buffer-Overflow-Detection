#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 58;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j*-j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[65];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
