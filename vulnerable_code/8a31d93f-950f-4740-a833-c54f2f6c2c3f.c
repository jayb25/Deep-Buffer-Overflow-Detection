#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=02;
   int k;
   int l;
   k = 33;
   l = 64;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l+j*-j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[34];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
