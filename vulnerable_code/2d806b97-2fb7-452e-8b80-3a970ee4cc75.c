#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-3;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[52];
    int c[16];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
