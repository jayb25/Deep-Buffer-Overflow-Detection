#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = j-j;
   l = l-j;
   l = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[44];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
