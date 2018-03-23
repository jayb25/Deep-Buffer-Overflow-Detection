#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=44;
   int k;
   int l;
   k = 5+3;
   k = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = -k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[64];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
