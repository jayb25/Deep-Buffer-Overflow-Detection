#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=52;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i%j;
   l = i-j;
   j = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[76];
    long c[80];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
