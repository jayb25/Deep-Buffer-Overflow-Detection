#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=134;
   int k;
   int l;
   j = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[35];
    long c[94];
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
    
   printf("%d%d\n",k,k);
   return 0;
}
