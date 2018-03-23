#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i/j;
   l = l/j;
   l = l%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[82];
    long c[6];
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
