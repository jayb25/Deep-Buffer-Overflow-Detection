#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=138;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i-j;
   l = i%j;
   l = +j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[86];
    long c[62];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
