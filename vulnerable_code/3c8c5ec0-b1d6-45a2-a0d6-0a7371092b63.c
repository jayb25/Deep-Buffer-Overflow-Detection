#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=134;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = k-j*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[25];
    long c[79];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
