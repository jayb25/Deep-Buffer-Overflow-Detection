#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[36];
    long c[19];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
