#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[99];
    long c[15];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
