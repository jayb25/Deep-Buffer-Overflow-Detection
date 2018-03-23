#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l/j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[39];
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
    
   printf("%d\n",k);
   return 0;
}
