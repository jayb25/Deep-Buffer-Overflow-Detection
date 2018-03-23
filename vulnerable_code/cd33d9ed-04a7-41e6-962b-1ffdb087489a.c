#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[15];
    char c[13];
    a = 0;
    while (b[a] != 0) {
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
