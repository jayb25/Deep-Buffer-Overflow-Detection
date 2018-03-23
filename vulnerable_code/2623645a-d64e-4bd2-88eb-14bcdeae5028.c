#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[14];
    int c[97];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
