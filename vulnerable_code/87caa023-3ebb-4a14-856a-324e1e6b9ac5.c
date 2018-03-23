#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 52;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[7];
    int c[13];
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
    
   printf("%d%d\n",i,l);
   return 0;
}
