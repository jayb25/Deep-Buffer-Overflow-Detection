#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[31];
    long c[67];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
