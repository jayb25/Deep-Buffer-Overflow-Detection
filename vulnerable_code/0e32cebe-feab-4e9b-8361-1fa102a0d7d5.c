#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 533;
   i = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   k = i-k*l;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[22];
    long c[84];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
