#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i%j;
   l = l+j;
   j = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[6];
    char c[15];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
