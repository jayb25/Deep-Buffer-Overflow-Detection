#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j%j;
   l = i/j;
   l = i%j;
   l = i+j;
   l = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[32];
    int c[10];
    a = 0;
    while (b[a] != 0) {
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
