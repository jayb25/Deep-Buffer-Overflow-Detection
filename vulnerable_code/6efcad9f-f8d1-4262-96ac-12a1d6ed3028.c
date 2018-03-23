#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 63;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[32];
    int c[42];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
