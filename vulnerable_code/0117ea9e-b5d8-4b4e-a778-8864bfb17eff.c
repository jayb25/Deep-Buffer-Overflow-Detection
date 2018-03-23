#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1241;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[56];
    long c[53];
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
