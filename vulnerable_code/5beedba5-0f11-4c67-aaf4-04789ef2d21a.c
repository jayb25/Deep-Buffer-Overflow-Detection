#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1432;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[16];
    int c[12];
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
    
   printf("%d\n",l);
   return 0;
}
