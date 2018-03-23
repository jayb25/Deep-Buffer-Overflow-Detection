#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = i-j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[57];
    int c[75];
    a = 0;
    do {
        //random
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
