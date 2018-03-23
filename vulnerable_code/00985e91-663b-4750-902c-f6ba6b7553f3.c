#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i/j;
   l = i%j;
   l = i%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[30];
    int c[83];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
