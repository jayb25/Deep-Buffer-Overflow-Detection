#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 64;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i+j;
   k = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[9];
    long c[7];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
