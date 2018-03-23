#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i%j;
   l = l/j;
   l = l-j;
   l = k%j;
   l = j%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[56];
    int c[69];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
