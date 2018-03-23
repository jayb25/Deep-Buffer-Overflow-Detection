#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l%j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[60];
    long c[79];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
