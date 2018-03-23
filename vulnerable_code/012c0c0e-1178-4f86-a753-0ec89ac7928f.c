#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=33;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i-j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[83];
    long c[89];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
