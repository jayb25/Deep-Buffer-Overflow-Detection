#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i%j;
   l = i/j;
   l = l-j;
   l = l/j;
   l = l/j;
   l = j-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[24];
    long c[47];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",i,l);
   return 0;
}
