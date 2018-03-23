#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[35];
    long c[11];
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
