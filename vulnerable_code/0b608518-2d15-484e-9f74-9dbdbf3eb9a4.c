#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=21;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = i%j;
   l = k-j*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[25];
    int c[84];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
