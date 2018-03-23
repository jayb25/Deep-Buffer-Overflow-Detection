#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=328;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[42];
    char c[70];
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
