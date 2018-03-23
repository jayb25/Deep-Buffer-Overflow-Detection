#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = i%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[39];
    int c[63];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
