#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   i = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[44];
    long c[80];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
