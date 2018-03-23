#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   l = k%k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[23];
    long c[37];
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
    
   printf("%d\n",i);
   return 0;
}
