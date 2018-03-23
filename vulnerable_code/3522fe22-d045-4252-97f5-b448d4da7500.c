#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 44;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[30];
    int c[71];
    a = 0;
    while (b[a] != 0) {
        //random
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
