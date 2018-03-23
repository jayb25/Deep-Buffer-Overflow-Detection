#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = l/j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[79];
    long c[91];
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
