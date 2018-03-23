#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1442;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j-j;
   l = j/j;
   l = l%j;
   l = l-j;
   k = k%j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[84];
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
