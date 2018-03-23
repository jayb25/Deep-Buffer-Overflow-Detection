#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = i%j;
   l = l%j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[8];
    char c[21];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
