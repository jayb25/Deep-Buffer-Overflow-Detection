#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=5424;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[67];
    char c[57];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
