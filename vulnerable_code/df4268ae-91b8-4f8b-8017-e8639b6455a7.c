#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = 6-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[52];
    a = 0;
    while (b[a] != 0) {
        //random
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
