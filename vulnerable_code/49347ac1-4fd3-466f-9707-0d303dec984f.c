#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[84];
    int c[77];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
