#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=111;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = k%j;
   l = i+j;
   l = l-j;
   l = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[54];
    long c[60];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
