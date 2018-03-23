#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=21;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = i%j;
   l = k-j*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[39];
    char c[9];
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
