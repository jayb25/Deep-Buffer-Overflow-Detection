#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 63;
   l = 64;
   k = l/j;
   l = i/j;
   l = l-j;
   l = k%j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[97];
    long c[75];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
