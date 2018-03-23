#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   l = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[59];
    int c[91];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
