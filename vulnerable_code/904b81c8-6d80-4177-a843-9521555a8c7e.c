#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   k = 64;
   k = i%j;
   l = l/j;
   l = j%j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[11];
    char c[88];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
