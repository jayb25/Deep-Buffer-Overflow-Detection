#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 54;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k/j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[47];
    long c[8];
    a = 0;
    do {
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
