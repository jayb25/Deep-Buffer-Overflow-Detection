#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=120;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = j/j;
   l = j-j;
   l = i-j;
   l = k-4*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[87];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
