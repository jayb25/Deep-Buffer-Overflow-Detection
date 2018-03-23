#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   l = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   j = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[48];
    long c[99];
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
