#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = i%3;
   l = j%j;
   l = i-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[71];
    long c[63];
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
