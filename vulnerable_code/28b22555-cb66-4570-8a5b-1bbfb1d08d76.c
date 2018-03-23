#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=124;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[95];
    int c[65];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,k);
   return 0;
}
