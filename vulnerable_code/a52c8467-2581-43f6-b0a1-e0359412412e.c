#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=320;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l%j;
   j = i-3;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[87];
    int c[99];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
