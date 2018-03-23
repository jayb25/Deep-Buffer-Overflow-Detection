#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i-j;
   k = i/j;
   l = i/j;
   l = i-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[7];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
