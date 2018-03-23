#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = l-j;
   l = l%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[92];
    long c[91];
    a = 0;
    do {
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
