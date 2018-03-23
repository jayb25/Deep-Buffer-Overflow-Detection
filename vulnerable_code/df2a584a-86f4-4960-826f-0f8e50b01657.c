#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = i%j;
   l = j%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[91];
    char c[22];
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
