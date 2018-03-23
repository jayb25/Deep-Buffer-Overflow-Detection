#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 534;
   l = 64;
   k = k/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[79];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
