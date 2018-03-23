#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=422;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[18];
    long c[72];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
