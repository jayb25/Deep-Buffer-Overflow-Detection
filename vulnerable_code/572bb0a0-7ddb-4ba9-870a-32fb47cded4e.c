#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=321;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = l-j;
   l = l-j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[97];
    int c[40];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
