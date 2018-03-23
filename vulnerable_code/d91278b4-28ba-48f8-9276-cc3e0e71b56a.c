#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=1482;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j-j;
   l = j%j;
   l = l-j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[84];
    int c[89];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
