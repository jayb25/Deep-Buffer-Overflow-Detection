#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[32];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
