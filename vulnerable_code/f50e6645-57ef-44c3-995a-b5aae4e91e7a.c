#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 558;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = j-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[81];
    int c[57];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
