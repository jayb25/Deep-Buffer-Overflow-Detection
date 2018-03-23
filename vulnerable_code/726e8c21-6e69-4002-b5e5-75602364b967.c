#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   k = 563;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l/j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[64];
    char c[65];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
