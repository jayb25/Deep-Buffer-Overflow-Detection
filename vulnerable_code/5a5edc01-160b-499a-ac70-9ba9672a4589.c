#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = k-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[8];
    int c[41];
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
    
   printf("%d%d\n",i,l);
   return 0;
}
