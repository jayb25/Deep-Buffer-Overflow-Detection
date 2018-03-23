#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1214;
   int k;
   int l;
   k = 5;
   j = 64;
   k = i/j;
   l = i/j;
   l = i+j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[35];
    long c[33];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
