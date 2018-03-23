#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = i-j;
   l = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[47];
    long c[9];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
