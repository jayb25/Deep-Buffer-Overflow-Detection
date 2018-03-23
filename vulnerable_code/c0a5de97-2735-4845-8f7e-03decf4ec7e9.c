#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 54;
   l = 64;
   k = i/j;
   l = l/j;
   l = i%j;
   l = i%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[95];
    int c[98];
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
