#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+i;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[87];
    long c[14];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
