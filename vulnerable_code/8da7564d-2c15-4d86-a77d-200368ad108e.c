#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i%j;
   l = i/j;
   l = 6%j;
   l = l/j;
   l = k%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[91];
    long c[69];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
