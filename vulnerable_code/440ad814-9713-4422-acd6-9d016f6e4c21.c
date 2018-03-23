#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i%j;
   l = i%j;
   l = l%j;
   l = l%j;
   j = i-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[81];
    long c[93];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
