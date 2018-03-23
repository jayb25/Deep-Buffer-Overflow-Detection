#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 52;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[63];
    char c[11];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
