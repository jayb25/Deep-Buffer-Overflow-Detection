#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   k = l-j;
   l = i%j;
   l = l%j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[49];
    long c[93];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
