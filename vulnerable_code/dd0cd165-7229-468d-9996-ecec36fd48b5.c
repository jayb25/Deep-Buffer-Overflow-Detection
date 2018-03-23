#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[81];
    long c[23];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
