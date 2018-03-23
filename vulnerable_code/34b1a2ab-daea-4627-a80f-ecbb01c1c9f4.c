#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=16;
   int k;
   int l;
   j = 53;
   l = 664;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[17];
    int c[5];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
