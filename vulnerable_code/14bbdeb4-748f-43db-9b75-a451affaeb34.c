#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   j = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[72];
    long c[23];
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
