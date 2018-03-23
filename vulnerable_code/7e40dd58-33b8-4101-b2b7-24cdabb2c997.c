#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=3412;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   j = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[84];
    int c[63];
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
