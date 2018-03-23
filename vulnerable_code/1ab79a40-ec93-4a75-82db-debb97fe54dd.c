#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 53;
   l = 65;
   k = i/j;
   l = i%j;
   l = i/j;
   l = i%j;
   l = j+j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[71];
    long c[86];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
