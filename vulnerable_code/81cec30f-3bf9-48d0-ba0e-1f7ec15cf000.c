#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = k%j;
   l = l%j;
   l = l-j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[6];
    long c[52];
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
