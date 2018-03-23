#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 5;
   k = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i/j;
   l = l+j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[98];
    long c[76];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
