#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i-j;
   l = i/j;
   l = i%j;
   l = l+j;
   l = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[46];
    long c[6];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
