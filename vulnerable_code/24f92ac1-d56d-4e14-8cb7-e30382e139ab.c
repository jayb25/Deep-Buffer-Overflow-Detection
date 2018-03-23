#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = j-j;
   l = i%j;
   k = l%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[81];
    long c[10];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",i,l);
   return 0;
}
