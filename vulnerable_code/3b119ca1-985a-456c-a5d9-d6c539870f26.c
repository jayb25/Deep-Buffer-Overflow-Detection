#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 53;
   l = +4;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = j+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[23];
    long c[70];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",i,l);
   return 0;
}
