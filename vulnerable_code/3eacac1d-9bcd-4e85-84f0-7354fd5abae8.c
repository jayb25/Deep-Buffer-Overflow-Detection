#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=41;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l-j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[68];
    int c[93];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
