#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   k = 53;
   l = 14;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i%j;
   l = l-j*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[6];
    long c[75];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",i,l);
   return 0;
}
