#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=184;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = j/j;
   l = l%j;
   l = l+j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[96];
    long c[86];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
