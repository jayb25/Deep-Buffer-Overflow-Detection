#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i/j;
   l = l/j;
   l = l/j;
   l = i%j;
   l = j+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[40];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
