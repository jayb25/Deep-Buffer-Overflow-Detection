#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i%j;
   l = l-j;
   l = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[53];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
