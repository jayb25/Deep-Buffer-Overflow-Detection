#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=184;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = j/j;
   l = l%j;
   l = l+j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[31];
    int c[44];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
