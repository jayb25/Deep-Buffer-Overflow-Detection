#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=324;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[33];
    long c[52];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
