#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   i = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[64];
    int c[7];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
