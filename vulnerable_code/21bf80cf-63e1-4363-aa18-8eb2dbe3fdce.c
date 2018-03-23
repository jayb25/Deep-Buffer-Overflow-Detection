#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 64;
   k = k/j;
   i = i/j;
   l = i%j;
   l = i/j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[6];
    long c[48];
    a = 0;
    while (a < strlen(b)) {
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
