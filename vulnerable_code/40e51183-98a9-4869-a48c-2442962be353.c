#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   l = 533;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l/j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[75];
    long c[87];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
