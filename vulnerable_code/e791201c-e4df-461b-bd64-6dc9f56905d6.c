#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   k = 644;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[75];
    int c[47];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
