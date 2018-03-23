#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 54;
   l = 44;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+(i-j);
   k = --k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[58];
    long c[93];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
