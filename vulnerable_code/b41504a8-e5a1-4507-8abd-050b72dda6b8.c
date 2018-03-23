#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   k = 6-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[7];
    long c[86];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
