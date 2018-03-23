#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=324;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[24];
    char c[47];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
