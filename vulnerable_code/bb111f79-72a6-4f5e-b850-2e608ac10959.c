#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=144;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/4;
   l = l/j;
   l = l%j;
   l = l+3;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[75];
    int c[28];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
