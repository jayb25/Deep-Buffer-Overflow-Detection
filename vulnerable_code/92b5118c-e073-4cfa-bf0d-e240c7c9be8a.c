#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[15];
    long c[56];
    a = 0;
    while (a < strlen(b)) {
        //random
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
