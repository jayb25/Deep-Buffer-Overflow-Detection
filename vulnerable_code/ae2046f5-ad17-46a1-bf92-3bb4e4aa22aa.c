#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i%j;
   l = i%j;
   l = l/j;
   l = i-j;
   l = i-j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[49];
    long c[49];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
