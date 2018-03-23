#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   i = i/j;
   l = i/j;
   l = i%j;
   l = i%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[18];
    long c[78];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
