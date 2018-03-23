#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=142;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = l%j;
   l = l-j;
   l = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[61];
    int c[68];
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
