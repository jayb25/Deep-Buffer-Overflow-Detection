#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 5;
   i = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k-j;
   l = i%j;
   l = i+j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[76];
    int c[25];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
