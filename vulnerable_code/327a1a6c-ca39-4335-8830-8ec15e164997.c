#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   l = i-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[45];
    long c[26];
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
