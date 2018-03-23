#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=17;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[6];
    int c[38];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
