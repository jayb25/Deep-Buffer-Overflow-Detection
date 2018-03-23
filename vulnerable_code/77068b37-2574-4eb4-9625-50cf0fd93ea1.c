#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1444;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l/j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[99];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
