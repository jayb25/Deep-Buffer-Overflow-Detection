#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[39];
    char c[36];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
