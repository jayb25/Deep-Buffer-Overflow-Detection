#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12144;
   int k;
   int l;
   k = 5338;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[66];
    long c[28];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",i,l);
   return 0;
}
