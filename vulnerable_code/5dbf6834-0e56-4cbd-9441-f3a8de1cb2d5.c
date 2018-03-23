#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1224;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   l = l%j;
   l = j%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[92];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
