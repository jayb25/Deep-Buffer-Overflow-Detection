#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = l/j;
   l = --j;
   l = k/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[23];
    int c[53];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
