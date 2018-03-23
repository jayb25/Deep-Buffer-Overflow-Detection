#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = j-j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[60];
    long c[37];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
