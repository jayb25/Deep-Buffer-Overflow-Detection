#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=22;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = l%j;
   l = l%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[75];
    long c[57];
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
