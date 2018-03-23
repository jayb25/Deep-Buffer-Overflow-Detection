#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = i%j;
   l = l-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[53];
    char c[91];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
