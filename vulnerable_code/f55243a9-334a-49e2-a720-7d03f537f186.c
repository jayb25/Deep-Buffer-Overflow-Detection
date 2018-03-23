#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i%j;
   l = l+j;
   l = i-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[63];
    long c[78];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
