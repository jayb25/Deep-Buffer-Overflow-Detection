#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=11;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   l = i%j;
   l = i-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[97];
    int c[7];
    a = 0;
    while (a < strlen(b)) {
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
