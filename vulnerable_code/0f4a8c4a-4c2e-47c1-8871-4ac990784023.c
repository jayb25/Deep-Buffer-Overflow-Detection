#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l-j;
   i = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[70];
    char c[91];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
