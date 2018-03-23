#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[41];
    char c[34];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
