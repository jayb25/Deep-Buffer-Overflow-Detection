#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=143;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = j%j;
   l = l/j;
   l = k%j;
   l = i%j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[53];
    int c[7];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
