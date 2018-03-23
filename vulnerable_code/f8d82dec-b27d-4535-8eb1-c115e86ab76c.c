#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=128;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i+j;
   l = j-j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[76];
    long c[22];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
