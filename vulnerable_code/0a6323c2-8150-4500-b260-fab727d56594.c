#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[47];
    char c[38];
    a = 0;
    while (b[a] != 0) {
        //random
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
