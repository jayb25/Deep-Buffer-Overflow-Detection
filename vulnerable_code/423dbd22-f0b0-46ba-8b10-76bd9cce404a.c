#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=144;
   int k;
   int l;
   i = 532;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[46];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
