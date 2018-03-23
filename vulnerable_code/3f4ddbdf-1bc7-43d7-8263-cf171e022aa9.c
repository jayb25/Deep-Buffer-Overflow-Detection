#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   j = l%j;
   l = k-k*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[57];
    int c[88];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
