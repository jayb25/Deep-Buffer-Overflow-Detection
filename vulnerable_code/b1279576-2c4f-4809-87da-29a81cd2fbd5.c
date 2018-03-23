#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=114;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = j-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[43];
    long c[5];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
